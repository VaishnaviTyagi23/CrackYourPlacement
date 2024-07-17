class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(),strs.end());

        int a=strs.size();

        string first=strs[0],last=strs[a-1],ans="";
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i]){
                ans+=last[i];
                }
            else 
            {
                break;
            }
        }
        return ans;
        
    }

    
        
    
};