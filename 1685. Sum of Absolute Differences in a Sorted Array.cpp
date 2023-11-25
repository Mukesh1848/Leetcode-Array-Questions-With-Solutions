//  1685. Sum of Absolute Differences in a Sorted Array


class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
         vector<int> prefix = {nums[0]};
          int n = nums.size();
          
          for(int i =1;i<n;i++){
              prefix.push_back(nums[i]+ prefix[i-1]);
          }

          vector<int> ans;

          for(int i=0;i<n;i++){
              int leftSum = prefix[i] - nums[i];   // total sum of all left element expect current element 
              int rightSum = prefix[n-1] - prefix[i];  // total sum of right element expect current elelemnt

              int leftCount = i;    // number of element exit in left from current element
              int rightCount = n-1-i;   // number of element exit in right from current element

              int leftTotal = leftCount * nums[i] - leftSum;   
              int rightTotal = rightSum - rightCount * nums[i];

              ans.push_back(leftTotal + rightTotal);
          }

        return ans;
    }
};



/*
time complexity - O(N)
space complexity - O(N)
*/
