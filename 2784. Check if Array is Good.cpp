// 2784. Check if Array is Good


class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        n--;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                return false;
            }
        }
        if(nums[n]!=n){
            return false;
        }
        return true;
        
    }
};
