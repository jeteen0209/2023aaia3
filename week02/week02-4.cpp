class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {};
        for(char c : s){
            H[c]++;
        }

        for(char c : t){
            H[c]--;
            if(H[c]<0) return c;
        }
        return ' ';
    }
};
