class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
       vector<int>extra;
       for(int i=0;i<n;i++){
        if(nums[i]!=0){
            extra.push_back(nums[i]);
        }
       }
       int m=extra.size();
       for(int i=0;i<m;i++){
        nums[i]=extra[i];
       }
       for(int i=m;i<n;i++){
        nums[i]=0;
       }
        
    }
};