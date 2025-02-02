class Solution {
public:
    int trap(vector<int>& h) {
        int ans = 0,n=h.size();
        vector<int>prefex(n+1),suffex(n+1);
        for(int i=0;i<n;i++){
            prefex[i+1]=max(prefex[i],h[i]);
        }

        for(int j=n-1,i=0;j>=0;j--,i++){
            suffex[i+1]=max(suffex[i],h[j]);
        }
       
        cout << endl;
        for(int i=0;i<n;i++){
            ans+=max(0,min(prefex[i],suffex[n-i])-h[i]);
        }
        return ans;
    }
};
