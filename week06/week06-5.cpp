class Solution {
public:
    int maximumSwap(int num) {
        int ans = num;
        string s = to_string(num);
        //for(int i=0; i<s.length()-1; i++){
        for(int i=0; i<s.length(); i++){
            for(int j=i+1; j<s.length();j++){
                swap(s[i], s[j]);
                ans = max(ans, stoi(s));
                swap(s[i], s[j]);
            }
        }
        return ans;
    }
};
