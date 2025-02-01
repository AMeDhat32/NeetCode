class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
       
        int n = m.size();
       for(int i=0;i<n;i++){
        int l = 0,r = m[i].size() - 1;
        while(l<=r){
            int mid = (l+r)/2;
            // cout << l <<\ \<<r <<\ \<<mid << endl;
            if(m[i][mid]==target)return 1;
            if(m[i][mid]>target)r = mid-1;
            else l = mid+1;
        }
       
       }




        return 0;
    }
};