#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
                  if (!st.empty() && abs(st.top() - s[i]) == abs('A' - 'a')) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        if (!st.empty()) {
            string news = "";
            while (!st.empty()) {
                news += st.top();
                st.pop();
            }
            reverse(news.begin(), news.end());
            return news;
        }
        return "";
    }
};
