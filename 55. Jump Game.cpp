//   55. Jump Game.cpp


class Solution {
public:
    bool canJump(vector<int>& nums) {
         int n = nums.size();
         int reachable = 0;

         for(int i=0;i<n;i++){
             if(reachable < i){
                 return false;
             }
 // here we are adding (i+nums[i]) because we can reach at least this index
             reachable = max(reachable,i+nums[i]);
         }
         return true;
    }
};
