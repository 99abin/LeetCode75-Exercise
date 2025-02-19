using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0; int j = 0; //counter for word1 and word2
        
        while (i < word1.length() || j < word2.length()) { //Ensure that there are still characters in word1 or word2
            if (i < word1.length()) { //ensure that there are still characters in word1
                result.push_back(word1[i]); //added character with index i
                i++; //Increment to move to the next character
            }
            if (j < word2.length()) { //ensure that there are still characters in word2
                result.push_back(word2[j]); //added character with index j
                j++; //increment to move to the next character
            }
        }
        return result; //returns the result
    }
};
