class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>sk;
        for(auto& i :tokens){
          if(i==\+\){
            int x = sk.top(); sk.pop();
            int y = sk.top(); sk.pop();
            int z = x+y;
            sk.push(z);
          }
          else if(i==\*\){
            int x = sk.top(); sk.pop();
            int y = sk.top(); sk.pop();
            int z = x*y;
            sk.push(z);
          }
          else if(i==\-\){
            int x = sk.top(); sk.pop();
            int y = sk.top(); sk.pop();
            int z = y-x;
            sk.push(z);
          }
          else if(i==\/\){
            int x = sk.top(); sk.pop();
            int y = sk.top(); sk.pop();
            int z = y/x;
            sk.push(z);
          }
          else {
            sk.push(stoi(i));
          }
        }
        return sk.top();
    }
};