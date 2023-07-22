class Solution {
public:
    string reverseWords(string s) {
      stack<string> stack;
      string temp;
      for(int i=0; i<s.size(); i++){
          if(s[i]==' '){
              if(temp.size()!=0){
                  stack.push(temp);
                  temp.clear();
              }
          }
          else{
              temp+=s[i];
          }
      }
      if(temp.size()!=0){
            stack.push(temp);
            temp.clear();
      }
      string ans;
      while(!stack.empty()){
          ans+=stack.top();
          stack.pop();
          ans+=" ";
      }
      ans.pop_back();
      return ans;
    }
};