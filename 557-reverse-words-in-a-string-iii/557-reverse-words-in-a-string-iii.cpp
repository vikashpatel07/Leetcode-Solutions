class Solution {
public:
    string reverseWords(string s) {
        string res;
        stringstream ss(s);
        string word;
        while(ss>>word){
        reverse(word.begin(),word.end());
            res=res+word+" ";
        }
        res.pop_back();
        return res;
    }
};