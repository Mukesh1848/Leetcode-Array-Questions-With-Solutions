//  Problem Name And Number in leetcode --->  1887. Reduction Operations to Make the Array Elements Equal.


class Solution {
public:
    int reductionOperations(vector<int>& nums) {
          // sort the array
          sort(nums.begin(),nums.end());  
           int n = nums.size();
           int maxAns =0;
           int cnt =0;
      // traverse the array form reverse right to left and compare with next smaller element
               if(nums[i] > nums[i-1]){
                    cnt++;
                    maxAns += cnt;
               }
               else{
                   cnt++;
               }
           }
  return maxAns;
    } 
};


/*
time  complexity -   O(nlogn) + O(n)
space complexity - O(0)
*/
