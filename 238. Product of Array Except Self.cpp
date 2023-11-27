//   238. Product of Array Except Self


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
