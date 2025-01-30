class Solution {
public:
    bool isValid(string s) {
     stack<char>sk;
        for(auto& i : s){
            if(sk.empty())sk.push(i);
            else {
                if(sk.top()=='['&&i==']')sk.pop();
                else if(sk.top()=='{'&&i=='}')sk.pop();
                else if(sk.top()=='('&&i==')')sk.pop();
                else sk.push(i);
            }
        }
        return (sk.size()?0:1);
    }
};