class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int>pre(size+1,1),suff(size+1,1),ans(size);
        for(int i=0;i<size;i++)pre[i+1]=pre[i]*nums[i];
        for(int i=0,j=size-1;j>=0;j--,i++)suff[i+1]=suff[i]*nums[j];
        for(int i =0,j=size-1;j>=0;i++,j--)ans[i]=pre[i]*suff[j];
        return ans;
    }
};