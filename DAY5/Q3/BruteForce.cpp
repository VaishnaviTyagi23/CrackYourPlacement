class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]-arr[j]==x||arr[j]-arr[i]==x){
                    return 1;
                }
            }
        }
        return -1;
    }
};
