class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int sum=0;
        
        sum+=(int)coordinates[1];
            
        sum+=coordinates[0]-'0';
        if(sum%2==0){
            return false;
        }
        return true;
        
    }
};