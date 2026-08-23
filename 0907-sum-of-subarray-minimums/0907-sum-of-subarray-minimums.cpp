class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        stack<int> st1;
        stack<int> st2;
        vector<int> nse(n,n);
        vector<int> psse(n,-1);

        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && arr[st1.top()]>=arr[i]){
                st1.pop();
            }
            if(st1.empty()){
                nse[i]=n;
            }
            else{
                nse[i]=st1.top();
            }
            st1.push(i);
        }
        for(int i=0;i<n;i++){
            while(!st2.empty() && arr[st2.top()]>arr[i]){
                st2.pop();
            }
            if(!st2.empty()){
                psse[i]=st2.top();
            }
            
            st2.push(i);
        }

        long long total=0;
        int mod=(int)1e9+7;
        for(int i=0;i<n;i++){
            int left=i-psse[i];
            int right=nse[i]-i;
            total=(total+left*right*1LL*arr[i])%mod;
        }
        return total;
    }
};