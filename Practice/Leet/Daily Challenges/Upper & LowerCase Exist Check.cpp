class Solution {
public:
    bool lowcheck(string word) {
        int len = word.length();
        bool check = true;
        for (int i = 0; i < len; i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                check = true;
            } else {
                check = false;
                break;
            }
        }
        return check;
    }
    bool uppcheck(string word) {
        int len = word.length();
        bool check = true;
        for (int i = 0; i < len; i++) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                check = true;
            } else {
                check = false;
                break;
            }
        }
        return check;
    }
    int numberOfSpecialChars(string word) {
        int get = 0;
        int len = word.length();
        if ((lowcheck(word) == true && uppcheck(word) == false) ||
            (lowcheck(word) == false && uppcheck(word) == true)) {
            return 0;
        } else {
            string visited = "";
            for (int i = 0; i < len; i++) {
                int store = word[i];
                for (int j = i + 1; j < len; j++) {
                    if (visited.find(word[i]) != string::npos)
                        continue;
                    if (word[j] == word[i]) {
                        continue;
                    }
                    if (word[j] == (word[i] + 32) ||
                        word[j] == (word[i] - 32)) {
                        get++;
                        visited += word[i];
                        visited += word[j];
                        break;
                    }
                }
            }
        }
        return get;
    }
};