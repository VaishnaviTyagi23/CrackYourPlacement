class Solution {
public:
    bool check(int i,string s,int j){
        while(i<=j){
            if(s[i]!=s[j])return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;

        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return check(i+1,s,j)||check(i,s,j-1);
            }
        }
        return true;
        
    }
};