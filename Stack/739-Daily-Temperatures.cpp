class Solution {
public:
    vector<int> dailyTemperatures(const vector<int>& t) {
        int n = t.size();
        vector<int>ans(n,0);
        stack<pair<int,int>>sk;
        
        for(int i=0;i<n;++i){
          
           while(!sk.empty()&&sk.top().first<t[i]){
             
             auto [a,b] = sk.top();
             sk.pop();
             ans[b]=i-b;
           }

           sk.push({t[i],i});
        }

        return ans;
    }
};

static int fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();