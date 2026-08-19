class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        

        unordered_map<int,vector<bool>>seats;
        for(auto &seat:reservedSeats){
            int row=seat[0];
            int col=seat[1];
            if(seats.find(row)==seats.end()){
                seats[row]=vector<bool>(10,false);
            }
            seats[row][col-1]=true;
        }
        int count=(n-seats.size())*2;
        for(auto &[row,r]:seats){
            bool l=!r[1] && !r[2] && !r[3] && !r[4];
            bool m=!r[3] && !r[4] && !r[5] && !r[6];
            bool ri=!r[5] && !r[6] && !r[7] && !r[8];

            if(l&&ri){
                count+=2;
            }
            else if(l||ri||m){
                count++;
            }
        }
        return count;
        
    }
};