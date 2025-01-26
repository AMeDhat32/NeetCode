class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>sk;
        unordered_map<string ,function<int(int,int)>> operation =
        {
          {\+\,[](int a,int b)->int { return a+b; } },
          {\*\,[](int a,int b)->int { return a*b; } },
          {\-\,[](int a,int b)->int { return a-b; } },
          {\/\,[](int a,int b)->int { return a/b; } }
        };
        for(auto& i :tokens){
            if(operation.count(i)){
                int x = sk.top(); sk.pop();
                int y = sk.top(); sk.pop();
                auto z = operation[i](y,x);
                sk.push(z);
            }else {
                int x = stoi(i);
                sk.push(x);
            }
        }

        return sk.top();
    }
};