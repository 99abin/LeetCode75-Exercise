class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result; //variable for the result
    int maxval = *max_element(candies.begin(), candies.end()); //find the most candies in the candies variable
    
    for (int i = 0; i < candies.size(); i++) { //Loop to check elements one by one
        if (candies[i] + extraCandies >= maxval) { //If candies with index i are summed with extra candies are greater than the most candies.. 
            result.push_back(true); //added "true" to the result variable
        }
        else { //if not..
            result.push_back(false); //added "false" to the result variable
        }
    } 
    return result; //returns the value in result variable
    }
};
