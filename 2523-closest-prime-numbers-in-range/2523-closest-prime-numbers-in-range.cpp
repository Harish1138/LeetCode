class Solution {
public:
    
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans={-1,-1};
        int limit=sqrt(right);
        vector<bool> isPrime(limit+1,true);
        
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i*i<=limit;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=limit;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        
        vector<bool> segment(right-left+1,true);

        
        for(int i=2;i<=limit;i++){
            if(!isPrime[i]){
                continue;
            }
            long long first=max(i*i*1LL,((left+i-1LL)/i)*i);
            for(int j=first;j<=right;j+=i){
                segment[j-left]=false;
            }
            
        }
        
        int prev=-1;
        int minDiff=INT_MAX;
        for(int i=left;i<=right;i++){
            if(i>=2 && segment[i-left]){
                if(prev!=-1 && i-prev<minDiff){
                    minDiff=i-prev;
                    ans={prev,i};
                }
                if(minDiff==2){
                    return ans;
                }
                prev=i;
            }
            
        }
        return ans;
        
    }
};