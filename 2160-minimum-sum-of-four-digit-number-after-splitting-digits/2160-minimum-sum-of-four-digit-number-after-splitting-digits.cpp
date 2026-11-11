class Solution {
public:
    int size(int n){
        int count=0;
        while(n>0){
            n/=10;
            count++;
        }
        return count;
    }
    int minimumSum(int num) {
        vector<int> ans;
        while(num>0){
            ans.push_back(num%10);
            num/=10;
        }
        sort(ans.begin(),ans.end());
        int minSum=0;
        int ans1=INT_MAX;

        do{
            int num1=0;
            int num2=0;
            for(int i=0;i<ans.size()/2;i++){
                num1=num1*10+ans[i];

            }
            for(int i=ans.size()/2;i<ans.size();i++){
                num2=num2*10+ans[i];
            }
            minSum=num1+num2;
            ans1=min(minSum,ans1);
            
        }
        while(next_permutation(ans.begin(),ans.end()));
        return ans1;
        
    }
};