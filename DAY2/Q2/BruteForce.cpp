class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       vector <int> p;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                p.push_back(i);
                p.push_back(j);
                  return p;
            }
        }
       }
       return p;
     
    }
};