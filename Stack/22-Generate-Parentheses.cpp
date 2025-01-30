class Solution {
public:
    vector<string>ans;
    void check(string s){
        stack<char>sk;
        for(auto& i :s){
            if(sk.empty())sk.push(i);
            else if(sk.top()=='('&&i==')')sk.pop();
            else sk.push(i);
        }
        if(sk.empty())ans.push_back(s);
        
    }
    void generate(int n,string temp){
          if(temp.size()>n)return;
          if(temp.size()==n)check(temp);
            
          int x =count(temp.begin(),temp.end(),'(');
          int y =count(temp.begin(),temp.end(),')');
        //   cout << temp << endl;
          if(x<n/2) generate(n,temp+\(\);
          if(y<x)generate(n,temp+\)\);
          
          
         
    }
    vector<string> generateParenthesis(int n) {
        string s;
        generate(n*2,s);
        return ans;
    }
};