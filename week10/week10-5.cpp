//week10-5.cpp
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5=0, d10=0, d20=0;
        for(int c : bills){
            if(c==5) d5++;
            if(c==10) {
                if(d5>0){
                    d10++;
                    d5--;
                }else return false;

            }
            if(c==20){
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }
                else if(d5>=3){
                    d20++;
                    d5-=3;
                }else return false;

            }
        }
        return true;
    }
};
