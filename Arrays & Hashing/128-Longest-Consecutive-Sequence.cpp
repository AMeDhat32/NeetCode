class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int mx = 0,n = nums.size();
        set<int>st;
        for(auto& i :nums)st.insert(i);
        for(auto& i:st){
            int x = i,counter=0,plus=0;
            if(st.count(x-1))continue;
            while(st.count(x+plus))counter++,plus++;
            st.insert(x);
            mx = max(mx,counter);

        }
       
        
       return mx;
    }
};