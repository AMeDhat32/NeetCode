class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            int dif = abs(s[i]-s[j]);
           if(!isalpha(s[i])&&!isdigit(s[i]))i++;
           else if(!isalpha(s[j])&&!isdigit(s[j]))j--;
           else {
            char a = tolower(s[i]),b=tolower(s[j]);
            if(a==b)i++,j--;
            else return false;
           }
        }

        return true;
    }
};