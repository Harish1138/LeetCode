class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        vector<int> nse(n,n);
        vector<int> psse(n,-1);
        stack<int> st1;
        stack<int> st2;
        for(int i=0;i<nums.size();i++){
            while(!st2.empty() && nums[st2.top()]>=nums[i]){
                st2.pop();
            }
            if(!st2.empty()){
                psse[i]=st2.top();
            }
            st2.push(i);
        }

        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && nums[st1.top()]>nums[i]){
                st1.pop();

            }
            if(!st1.empty()){
                nse[i]=st1.top();
            }
            st1.push(i);
        }

        vector<int> nge(n,n);
        vector<int> pgee(n,-1);
        stack<int> st3;
        stack<int> st4;

        for(int i=n-1;i>=0;i--){
            while(!st3.empty() && nums[st3.top()]<nums[i]){
                st3.pop();
            }
            if(!st3.empty()){
                nge[i]=st3.top();
            }
            st3.push(i);
        }
        for(int i=0;i<n;i++){
            while(!st4.empty() && nums[st4.top()]<=nums[i]){
                st4.pop();
            }
            if(!st4.empty()){
                pgee[i]=st4.top();
            }
            st4.push(i);
        }

        long long sum1=0;
        long long sum2=0;
        for(int i=0;i<n;i++){
            int left=i-psse[i];
            int right=nse[i]-i;
            sum1+=1LL*left*right*nums[i]; 
        }
        for(int i=0;i<n;i++){
            int left=i-pgee[i];
            int right=nge[i]-i;
            sum2+=1LL*right*left*nums[i];
        }

        return sum2-sum1;

    }
    

};