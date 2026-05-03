class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;
        if (s == goal)
            return true; 
        
        int n = s.length();
        string get = s;
        for (int i = 0; i < n; i++) {
            string ns = "";
            for (int j = 1; j < n; j++) {
                ns = ns + get[j];
            }
            ns = ns + get[0];
            get = ns;

            if (get == goal) {
                return true;
            }
        }
        return false;
    }
};