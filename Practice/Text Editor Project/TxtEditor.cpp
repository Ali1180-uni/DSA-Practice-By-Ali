#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string CYAN = "\033[36m";
class Node {
	public:
		vector<string> data;
		Node* Next;
		Node() {
			Next = nullptr;
		}
};

class Stack {
	public:
		Node *top1;
		int count,limit;
		Stack() {
			top1 = nullptr;
			count = 0;
			limit = 100;
		}
		bool IsEmpty() {
			return top1 == nullptr;
		}
		bool empty() {
			return IsEmpty();
		}
		bool isFull() {
			return count >= limit;
		}
		void push(const vector<string>& sit) {
			if(isFull()) {
				return;
			}
			Node *temp = new Node();
			temp->data = sit;
			temp->Next = top1;
			top1 = temp;
			count ++;
		}
		void pop() {
			if(IsEmpty() == true) {
				return;
			}
			Node* temp = top1;
			top1 = top1->Next;
			delete temp;
			count--;
		}
		vector<string> top() {
			if(IsEmpty()) {
				return {};
			}
			return top1->data;
		}
		vector<string> topState(){
			return top();
		}
};
class TextEditor {
	private:
		vector<string> inputTxt;
		Stack undo;
		Stack redo;
		string cFilename;
		string statusMsg;

		void clearScreen() {
			system("cls");
		}

		void saveState() {
			undo.push(inputTxt);
			while (!redo.empty()) {
				redo.pop();
			}
		}

	public:
		TextEditor() {
			cFilename = "untitled.txt";
		}
		void saveFile(string filename) {
			if (filename.empty()) {
				filename = cFilename;
			}
			ofstream outFile(filename);
			if (outFile.is_open()) {
				for(int i = 0; i<inputTxt.size(); i++) {
					outFile<<inputTxt[i]<<endl;
				}
				outFile.close();
				cFilename = filename;
				statusMsg = GREEN+" >> Success: File saved to '"+cFilename+"'!"+RESET;
			} else {
				statusMsg = RED+" >> Error: Could not save to '"+filename+"'."+RESET;
			}
		}
		void loadFile(string filename) {
			ifstream inFile(filename);
			if (inFile.is_open()) {
				saveState();
				inputTxt.clear();
				string line;
				while (getline(inFile, line)) {
					inputTxt.push_back(line);
				}
				inFile.close();
				cFilename = filename;
				statusMsg = GREEN + " >> Success: Loaded '" + cFilename + "'!" + RESET;
			} else {
				statusMsg = RED + " >> Error: Could not open '" + filename + "'." + RESET;
			}
		}
		void undotxt() {
			if (!undo.empty()) {
				redo.push(inputTxt);
				inputTxt = undo.top();
				undo.pop();
				statusMsg = YELLOW + " >> Undid last change." + RESET;
			} else {
				statusMsg = RED + " >> Nothing to undo." + RESET;
			}
		}
		void redotxt() {
			if (!redo.empty()) {
				undo.push(inputTxt);
				inputTxt = redo.top();
				redo.pop();
				statusMsg = YELLOW + " >> Redid change." + RESET;
			} else {
				statusMsg = RED + " >> Nothing to redo." + RESET;
			}
		}
		void findText(string query) {
			bool found = false;
			for (int i = 0; i < inputTxt.size(); ++i) {
				if (inputTxt[i].find(query) != string::npos) {
					statusMsg = GREEN + " >> Found '" + query + "' at line " + to_string(i+1) + RESET;
					found = true;
					break;
				}
			}
			if (!found) {
				statusMsg = RED + " >> '" + query + "' not found." + RESET;
			}
		}

		void edit(int n) {
			if (n > 0 && n <= inputTxt.size()) {
				cout << YELLOW << " >> Editing Line " << n << ": " << RESET << inputTxt[n-1] << endl;
				cout << " >> New Text: ";
				string newLine;
				getline(cin,newLine);

				saveState();
				inputTxt[n-1] = newLine;
				statusMsg = GREEN + " >> Success: Line " + to_string(n) + " updated." + RESET;
			} else {
				statusMsg = RED + " >> Error: Line " + to_string(n) + " does not exist." + RESET;
			}
		}
		void display() {
			clearScreen();
			cout << CYAN << "========================================================" << RESET << endl;
			cout << "   " << YELLOW << "SIMPLE EDITOR C++" << RESET << "  |  File: " << BLUE << cFilename << RESET << endl;
			cout << CYAN << "========================================================" << RESET << endl;
			int length = 15;
			for (int i = 0; i < length; ++i) {
				if (i < inputTxt.size()) {
					cout << (i+1) << "\t| " << inputTxt[i] << endl;
				} else {
					cout << "~\t|" << endl;
				}
			}
			cout << CYAN << "========================================================" << RESET << endl;
			cout << YELLOW << " CMDs: " << RESET
			     << ":undo  :redo  :find " << CYAN << "[txt]" << RESET
			     << "  :edit " << CYAN << "[num]" << RESET
			     << "  :save " << CYAN << "[name]" << RESET
			     << "  :load " << CYAN << "[name]" << RESET
			     << "  :exit" << endl;
			cout << CYAN << "--------------------------------------------------------" << RESET << endl;
			if (!statusMsg.empty()) {
				cout << statusMsg << endl;
				statusMsg = "";
			}
			cout << " TYPE BELOW (Enter to add line):" << endl;
		}

		void run() {
			string input;
			while (true) {
				display();
				cout << "> ";
				getline(cin, input);
				if (input == ":exit") {
					break;
				} else if (input == ":undo") {
					undotxt();
				} else if (input == ":redo") {
					redotxt();
				} else if (input.find(":save") == 0) {
					string fname = (input.length() > 6) ? input.substr(6) : cFilename;
					saveFile(fname);
				} else if (input.find(":load") == 0) {
					if (input.length() > 6) {
						loadFile(input.substr(6));
					} else {
						statusMsg = RED + " >> Error: Please provide a filename to load." + RESET;
					}
				} else if (input.find(":find") == 0) {
					if (input.length() > 6) {
						findText(input.substr(6));
					}
				} else if (input.find(":edit") == 0) {
					if (input.length() > 6) {
						try {
							int num = stoi(input.substr(6));
							edit(num);
						} catch (...) {
							statusMsg = RED + " >> Error: Invalid line number." + RESET;
						}
					} else {
						statusMsg = RED + " >> Usage: :edit [line_number]" + RESET;
					}
				} else {
					if(inputTxt.size() >= 15) {
						statusMsg = RED + " >> Please undo Something First .." + RESET;
					} else {
						saveState();
						inputTxt.push_back(input);
						statusMsg = "";
					}
				}
			}
		}
};

int main() {
	TextEditor editor;
	editor.run();
	return 0;
}
