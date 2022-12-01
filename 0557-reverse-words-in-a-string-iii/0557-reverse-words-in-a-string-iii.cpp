class Solution {
public:
    string reverseWords(string s) {
      stack<int> stk;
      string ans = "";

      for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
          stk.push(s[i]);
        } else {
          while(!stk.empty()){
            ans += stk.top();
            stk.pop();
          }
          ans += " ";
        }
      }

      while(!stk.empty()){
        ans += stk.top();
        stk.pop();
      }

      return ans;
   }
};
