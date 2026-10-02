class Solution {
public:
    void generate(string s,int start,int end,int n,vector<string>&arr){

        if(s.length()==2*n){
            arr.push_back(s);
            return;
            
        }
        if(start<n){
            generate(s+"(",start+1,end,n,arr);
        }
        if(end<start){
            generate(s+")",start,end+1,n,arr);
        }

        

    }

    vector<string> generateParenthesis(int n) {
        vector<string> arr;
        generate("",0,0,n,arr);
        return arr;
        


        
    }
};