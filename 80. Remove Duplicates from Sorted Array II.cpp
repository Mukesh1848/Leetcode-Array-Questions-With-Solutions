// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int count = 0;
        map<int,int> mpp;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

        for(auto it : mpp){
             if(it.second >= 2){
                 ans.push_back(it.first);
                 ans.push_back(it.first);
             }
             else{
                ans.push_back(it.first);
             }
        }
        nums = ans;
        return nums.size();
    }
};
