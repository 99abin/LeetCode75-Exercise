class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int yes = 0;
    
    for (int i = 0; i < candies.size(); i++) {
        for (int j = 0; j < candies.size(); j++) {
            if (candies.at(i) + extraCandies >= candies.at(j)) {
                yes++;
            }
            if (yes == candies.size()) {
                result.push_back(true);
                yes = 0;
            }
            else if (j == candies.size() - 1 && yes != candies.size()) {
                result.push_back(false);
                yes = 0;
            }
        }
    } 
    return result;
    }
};
