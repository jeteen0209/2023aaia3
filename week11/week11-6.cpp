//week11-6.cpp
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort( arr.begin(), arr.end() );
        int N = arr.size();
        for(int i=0; i<N-2; i++){
            if( arr[i]-arr[i+1] != arr[i+1]-arr[i+2]) return false;
        }
        return true;
    }
};
