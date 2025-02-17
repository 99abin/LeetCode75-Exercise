class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
        return "";
    }
    
    auto gcd = [](int a, int b) -> int {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    };
    
    int gcdLength = gcd(str1.length(), str2.length());
    
    return str1.substr(0, gcdLength);
    }
};
