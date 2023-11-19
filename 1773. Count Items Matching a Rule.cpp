//    1773. Count Items Matching a Rule


class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
         int i ;
    // define a index for ruleKey and compare with ruleValue
         if(ruleKey == "type") i=0;
         if(ruleKey == "color") i=1;
         if(ruleKey == "name") i=2;

         int ans =0;

         for(int j=0;j<items.size();j++){
             if(items[j][i] == ruleValue) ans++;
         }
         
         return ans;
    }
};
