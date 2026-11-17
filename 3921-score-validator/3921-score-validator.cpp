class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0;
        int w=0;
        for(auto it:events){
            
            if(it=="W"){
                w++;
                if(w==10){
                    return {score,w};
                }
            }

            else if(it=="WD" || it=="NB"){
                score++;
            }
            else{
                std::cout<<it<<endl;
                score+=stoi(it);
            }
        }
        return {score,w};
        
    }
};