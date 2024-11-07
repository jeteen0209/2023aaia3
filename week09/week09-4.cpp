//week09-4.cpp
class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];
        int min = salary[0];
        double total = 0;
        for(int i=0; i<salary.size(); i++){
            if(salary[i]>max) max = salary[i];
            if(salary[i]<min) min = salary[i];
            total += salary[i];
        }
        return(total - max - min)/ (salary.size()-2);
    }
};
