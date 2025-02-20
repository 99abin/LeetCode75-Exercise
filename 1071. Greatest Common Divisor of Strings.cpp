class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) { //if str1 and str2 do not have the same pattern...
        return ""; //the result is empty string
    }
    
    auto gcd = [](int a, int b) -> int { //function to find the gcd of both string lengths
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp; 
        }
        return a; //returns the gcd of both string length
    };
    
    int gcdLength = gcd(str1.length(), str2.length()); //variable to store the gcd of both string length
    
    return str1.substr(0, gcdLength); //returns the result, the result is a substring of str1 that start from index 0 to index of both string length gcd
    }
};
