class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            int num=i;
            if(num==0){
                ans[i]=0;
            }
            int count=0;
            while(num>0){
                
                int bit=num&1;
                if(bit==1){
                    count++;
                }
                num=num>>1;
            }
            ans[i]=count;


        }
        return ans;
    }
};