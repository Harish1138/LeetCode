class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max1=INT_MIN;
        for(auto it:s){
            if(it=='('){
                count++;
            }
            else if(it==')'){
                count--;
            }
            max1=max(count,max1);
        }
        return max1;
        
    }
};