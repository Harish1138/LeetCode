class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            
            if(i<7){
                count=1;
                ans+=i+1;
            }
            else{
                if(i%7==0){

                    count++;
                    ans+=count;
                }
                else{
                    ans=ans+(i%7)+count;
                }
            }
        }
        return ans;
    }
};