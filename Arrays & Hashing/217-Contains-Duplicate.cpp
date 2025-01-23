class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
      map<int,int>mp;
      for(auto& i :v){
          
          mp[i]++;
          if(mp[i]==2)return 1;
      }
       
       return 0; 
    }
};