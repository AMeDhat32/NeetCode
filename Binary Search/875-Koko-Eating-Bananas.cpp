class Solution {
public:
    long ceill(int n,int m){
        return n/m+(n%m?1:0);
    }
    long check(int k,vector<int>&p){
        long counter = 0;
        for(auto& i:p)counter+=ceill(i,k);
        return counter;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1,r = INT_MIN;
        for(auto& i :piles)r = max(r,i);
        int ans = r;
        while(l<=r){
            int k = l +(r-l)/2;
            long hours = check(k,piles);
            // cout << hours <<" "<<k <<endl;
            if(hours>h)l = k+1;
            else ans = min(ans,k),r=k-1;
        }
        return ans;


    }
};