class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        for(int i = 0; i<n; i++){
            char c = s[i];
            if(c == '{' || c == '[' || c == '('){
                st.push(c);
            }else if(c == '}' || c == ')' || c == ']'){
                if(st.empty() == true){
                    return false;
                }else{
                    char d = st.top();
                    if((c == '}' && d == '{') || (c == ']' && d == '[') || (c == ')' && d == '(')){
                        st.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};