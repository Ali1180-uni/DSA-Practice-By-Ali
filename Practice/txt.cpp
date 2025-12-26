#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <fstream>
#include <cstdlib>

using namespace std;

// ANSI Color Codes for highlighting
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string CYAN = "\033[36m";

class TextEditor {
private:
    vector<string> content;
    stack<vector<string>> history;
    stack<vector<string>> future;
    string currentFilename;
    string statusMessage; // Stores messages to show on the next screen update

    void clearScreen() {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif
    }

    void saveState() {
        history.push(content);
        while (!future.empty()) {
            future.pop();
        }
    }

public:
    TextEditor() {
        currentFilename = "untitled.txt";
    }

    // --- File I/O ---

    void saveToFile(string filename) {
        if (filename.empty()) filename = currentFilename;
        
        ofstream outFile(filename);
        if (outFile.is_open()) {
            for (const string &line : content) {
                outFile << line << endl;
            }
            outFile.close();
            currentFilename = filename;
            // Set status message instead of pausing with cin.get()
            statusMessage = GREEN + " >> Success: File saved to '" + currentFilename + "'!" + RESET;
        } else {
            statusMessage = RED + " >> Error: Could not save to '" + filename + "'." + RESET;
        }
    }

    void loadFromFile(string filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            saveState();
            content.clear();
            string line;
            while (getline(inFile, line)) {
                content.push_back(line);
            }
            inFile.close();
            currentFilename = filename;
            statusMessage = GREEN + " >> Success: Loaded '" + currentFilename + "'!" + RESET;
        } else {
            statusMessage = RED + " >> Error: Could not open '" + filename + "'." + RESET;
        }
    }

    // --- Editor Commands ---

    void undo() {
        if (!history.empty()) {
            future.push(content);
            content = history.top();
            history.pop();
            statusMessage = YELLOW + " >> Undid last change." + RESET;
        } else {
            statusMessage = RED + " >> Nothing to undo." + RESET;
        }
    }

    void redo() {
        if (!future.empty()) {
            history.push(content);
            content = future.top();
            future.pop();
            statusMessage = YELLOW + " >> Redid change." + RESET;
        } else {
            statusMessage = RED + " >> Nothing to redo." + RESET;
        }
    }

    void findText(string query) {
        bool found = false;
        for (int i = 0; i < content.size(); ++i) {
            if (content[i].find(query) != string::npos) {
                statusMessage = GREEN + " >> Found '" + query + "' at line " + to_string(i + 1) + RESET;
                found = true;
                break; // Stop at first match
            }
        }
        if (!found) statusMessage = RED + " >> '" + query + "' not found." + RESET;
    }

    // --- Display & Run ---

    void display() {
        clearScreen();
        cout << CYAN << "========================================================" << RESET << endl;
        cout << "   " << YELLOW << "SIMPLE EDITOR C++" << RESET << "  |  File: " << BLUE << currentFilename << RESET << endl;
        cout << CYAN << "========================================================" << RESET << endl;

        int viewHeight = 15; 
        for (int i = 0; i < viewHeight; ++i) {
            if (i < content.size()) {
                cout << (i + 1) << "\t| " << content[i] << endl;
            } else {
                cout << "~\t|" << endl;
            }
        }

        cout << CYAN << "========================================================" << RESET << endl;
        // Highlighted Menu
        cout << YELLOW << " CMDs: " << RESET 
             << ":undo  :redo  :find " << CYAN << "[txt]" << RESET 
             << "  :save " << CYAN << "[name]" << RESET 
             << "  :load " << CYAN << "[name]" << RESET 
             << "  :exit" << endl;
        cout << CYAN << "--------------------------------------------------------" << RESET << endl;

        // Show status message if it exists, then clear it
        if (!statusMessage.empty()) {
            cout << statusMessage << endl;
            statusMessage = ""; 
        }

        cout << " TYPE BELOW (Enter to add line):" << endl;
    }

    void run() {
        string input;
        while (true) {
            display();
            cout << "> ";
            getline(cin, input);

            // Check for commands (lines starting with :)
            if (input == ":exit") {
                break;
            } else if (input == ":undo") {
                undo();
            } else if (input == ":redo") {
                redo();
            } else if (input.find(":save") == 0) {
                string fname = (input.length() > 6) ? input.substr(6) : currentFilename;
                saveToFile(fname);
            } else if (input.find(":load") == 0) {
                if (input.length() > 6) {
                    loadFromFile(input.substr(6));
                } else {
                    statusMessage = RED + " >> Error: Please provide a filename to load." + RESET;
                }
            } else if (input.find(":find") == 0) {
                 if (input.length() > 6) {
                    findText(input.substr(6));
                }
            } else {
                // Normal text input
                saveState();
                content.push_back(input);
                statusMessage = ""; // Clear status on new input
            }
        }
    }
};

int main() {
    TextEditor editor;
    editor.run();
    return 0;
}