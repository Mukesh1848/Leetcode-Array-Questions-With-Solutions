//   1814. Count Nice Pairs in an Array

class Solution {
public:
 int reverseNum(int num) {
        int result = 0;
        while (num > 0) {
            result = result * 10 + num % 10;
            num /= 10;
        }
        
        return result;
    }

    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int ans=0;
        int n = nums.size();
        int MOD = 1e9 +7;
 /* we are traversing aaray from right to left 
  because if searched element found in map so we increse ans with  frequency of searched element 
  */
        for(int i=n-1;i>=0;i--){
             int searched = nums[i] - reverseNum(nums[i]);
             if(mp.find(searched) != mp.end()){
                 ans = (ans+mp[searched]) % MOD;
             }
             mp[searched]++;
        }
        return ans;
    }
};

Time Complexity - O(N)
space Complexity - O(N)
