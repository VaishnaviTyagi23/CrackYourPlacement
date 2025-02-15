class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int n= prices.size();
        for(int i=0;i<n;i++){
           mini=min(mini,prices[i]);
           maxi=max(maxi,prices[i]-mini);
        }
        if(maxi<0){
            return 0;
        }
        return maxi;
        
    }
};