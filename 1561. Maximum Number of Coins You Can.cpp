// 1561. Maximum Number of Coins You Can

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int maxSum = 0;
        // step 1 sort the array 
           sort(piles.begin(),piles.end());
// step 2 (we are taking every time two element from the end and  one from the begining of piles) and adding second lat element for the ans
          int n = piles.size();
          int i=0;
          int j= n-2;
           while(i<j){
               maxSum += piles[j];
               j = j-2;
               i++;
           }
           return maxSum;
    }
};
