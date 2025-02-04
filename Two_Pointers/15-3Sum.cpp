class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        
        
        int n = nums.size();
        
      
   for (int i = 0; i < n; ++i) {
    
    if (i > 0 && nums[i] == nums[i - 1]) continue;

     int l = i + 1, r = n - 1;
       while (l < r) {
        int sum = nums[l] + nums[r];
        if (sum == -nums[i]) {
            ans.push_back({nums[i], nums[l], nums[r]});
          
            while (l < r && nums[l] == nums[l + 1]) l++;
            while (l < r && nums[r] == nums[r - 1]) r--;
            l++;
            r--;
        } else if (sum < -nums[i]) {
            l++;
        } else {
            r--;
        }
    }
}
         
 
         return ans;
    }
};

static int fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();