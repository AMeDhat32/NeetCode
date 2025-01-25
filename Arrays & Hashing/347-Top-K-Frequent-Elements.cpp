class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(auto& i :nums)mp[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto & [a,b]:mp){
            pq.push({b,a});
        }
        while(!pq.empty()&&k>0){
            auto [a,b] = pq.top();
            pq.pop();
            k--;
            ans.push_back(b);
        }
         return ans;
    }
};