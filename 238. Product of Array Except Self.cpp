//   238. Product of Array Except Self

//  1st solution

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         vector<int> ans;
         int product = 1;
         int n= nums.size();
        
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               if(j==i){

               }
               else{
                   product = product * nums[j]; 
               }
           }
           ans.push_back(product);
           product =1;
       }
       return ans;
    }
};

//  2nd solution 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int n = nums.size();
        vector<int> prefixProductFromStart(n);
        vector<int>prefixProductFromEnd(n);
        vector<int> ans(n);
         
         // compute prfixproduct        
       prefixProductFromStart[0] = nums[0];
        for(int i=1;i<n;i++){
            prefixProductFromStart[i] = prefixProductFromStart[i-1] * nums[i];
        }

    // compute prfixproduct      
    prefixProductFromEnd[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
          prefixProductFromEnd[i] = prefixProductFromEnd[i+1] * nums[i];
        }
        
        // for ans array here we handl first and last element
        ans[0] = prefixProductFromEnd[1];
        ans[n-1] =prefixProductFromStart[n-2];
        for(int i=1;i<n-1;i++){
            ans[i] = prefixProductFromStart[i-1] * prefixProductFromEnd[i+1];
        }
        return ans;
    }
};
