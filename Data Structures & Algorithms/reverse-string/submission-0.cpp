class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;// start of the sring we can say initialisation 
        int e = s.size()-1;///end of string here n should be defined so we defined what n is 
        while (st <e){
            swap(s[st++],s[e--]);
        }
        
    }
};