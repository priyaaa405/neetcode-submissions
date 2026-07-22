class Solution {
public:
    int lengthOfLastWord(string s) {

        stringstream ss(s);
        string word;

        while(ss >> word) {
            // keeps updating word
        }

        return word.length();
    }
};