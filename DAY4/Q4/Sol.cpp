//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
     int fun(vector<long long int> &nums,int n){
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                c++;
            
        }
        return(c);
    }
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here 
          vector<long long int> ans(n,0);
        int zeros=fun(nums,n);
        
        if(zeros>1)
            return(ans);
    
        long long int p=1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                p=p*nums[i];
        }
        
        if(zeros==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0)
                    ans[i]=p;
            }
            return(ans);
        }
        
        for(int i=0;i<n;i++){
            ans[i]=(p/nums[i]);
        }
        return(ans);
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends