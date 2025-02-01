class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn = 5001;
        int l = 0, r =nums.size()-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            mn = min(mn,nums[mid]);
            if(nums[mid]<nums[r])r = mid-1;
            else l = mid +1;
        }
        return mn;
    }
};