//week10-6.cpp
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int N = nums.size();
        for(int i=0; i<N-2; i++){
            if( nums[N-1-i] < nums[N-2-i] + nums[N-3-i]){
                return nums[N-1-i]+nums[N-2-i]+nums[N-3-i];
            }
        }
        return 0;
    }
};
