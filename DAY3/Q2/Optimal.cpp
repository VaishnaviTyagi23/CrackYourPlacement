class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         if (strs.empty()) {
            return "";
        }
         string prefix="";
         bool diff=false;

         for(int i=0;i<strs[0].length();i++){
             //char currentChar = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]){
                    diff=true;
                }
            }
            if(diff!=true){
                prefix+=strs[0][i];
            }
         }
         return prefix;
    }

    
        
    
};