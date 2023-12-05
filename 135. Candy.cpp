// 135. Candy


class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candy(ratings.size(), 1);

// compare if curr element is  greater than previous so increase candy by 1
// travsering left to right 
        for(int i = 1; i < ratings.size(); i++) {
            if(ratings[i] > ratings[i - 1]) {
                candy[i] = candy[i - 1] + 1;
            }
        }

// compare if curr element is greater than next element so increase candy by 1
// traversing right to left
        for(int i = ratings.size() - 2; i > -1; i--) {
            if(ratings[i] > ratings[i + 1] && candy[i] <= candy[i + 1]) {
                candy[i] = candy[i + 1] + 1;
            } 
        }
    return accumulate(candy.begin(), candy.end(), 0); // summation of ans array
    }
};
