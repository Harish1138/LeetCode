class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double avg;
        double sum=0;
        for(int i=0;i<salary.size();i++){
            if(i==0 || i==salary.size()-1){
                continue;
            }
            else{
                sum+=salary[i];
            }
        }
        return sum/(salary.size()-2);
    }
};