class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int l=to_string(low).length();
        int h=to_string(high).length();
        string s="123456789";
        for(int i=l;i<=h;i++){
            for(int j=0;i+j<=9;j++){
                int num=stoi(s.substr(j,i));
                if(num>=low && num<=high){
                    ans.push_back(num);
                }
            }
            
        }
        return ans;


    }
};