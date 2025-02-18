class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowels = {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
        vector<int> index;
        vector<char> vow;

        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < vowels.size(); j++) {
                if (s[i] == vowels[j]) {
                    index.push_back(i);
                    vow.push_back(s[i]);
                    s[i] = '0';
                }
            }
        }
        
        reverse(vow.begin(), vow.end());
        
        for (int num: index) {
            cout << num << endl;
        }
        
        for (int k = 0; k < index.size(); k++) {
            s[index[k]] = vow[k];
        }
        
        return s;
    }
};
