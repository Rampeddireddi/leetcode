class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
          string result = "";
    while (!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    return result;
    }
};