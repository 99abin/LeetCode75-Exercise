class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int emptypot = 0;
    int flower = 0;
    int count1 = count(flowerbed.begin(), flowerbed.end(), 1);
    flowerbed.insert(flowerbed.begin(),0);
    flowerbed.insert(flowerbed.end(),0);

    for (int i = 0; i < flowerbed.size(); i++) {
        if (flowerbed[i] == 0) {
                emptypot++;
        } else {emptypot = 0;};
        if (emptypot == 3) {
                flowerbed[i-1] = 1;
                emptypot = 1;
        }
    }
    int count2 = count(flowerbed.begin(), flowerbed.end(), 1);
    return(count2 - count1 >= n);
    }
};
