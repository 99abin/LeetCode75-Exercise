class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int emptypot = 0; //counter variable to store the number of empty pot
    int flower = 0; //counter variable to store the number of flower that being added 
    int count1 = count(flowerbed.begin(), flowerbed.end(), 1); //variable to store the number of flower that have been added
    flowerbed.insert(flowerbed.begin(),0); //adding an empty pot as the first pot
    flowerbed.insert(flowerbed.end(),0); //adding an empty pot as the last pot

    for (int i = 0; i < flowerbed.size(); i++) { //loops to add flowers to available pots
        if (flowerbed[i] == 0) { //because the flower that being added can't have an adjacent, this statement is created to detect 3 consecutive empty pots
                emptypot++; //increment if there is an empty pot
        } else {emptypot = 0;}; //if the pot isn't empty, resert the counter
        if (emptypot == 3) { //if there are 3 consecutive empty pot...
                flowerbed[i-1] = 1; //adding flower to the previous pot
                emptypot = 1; //reset the counter to 1
        }
    }
    int count2 = count(flowerbed.begin(), flowerbed.end(), 1); //varaible to store the number of flowers
    return(count2 - count1 >= n); //substracting the number of all flower with the number of flower in the beginning to find the number of flowers newly added
    }
};
