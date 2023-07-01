#include <bits/stdc++.h>
using namespace std;
 string removeDuplicates(string s) {
        stack<char>st;
        int n = s.size();
        for(int i=0;i<n;i++){
            bool flag = true;
            if(!st.empty() && st.top() == s[i]){
                flag = false;
                st.pop();
            }
            if(flag){
                st.push(s[i]);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main()
{
    
    return 0;
}