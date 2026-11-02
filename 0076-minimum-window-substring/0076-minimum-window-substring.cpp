class Solution {
public:
    bool sahi(vector<int> &have,vector<int> &needed){
        for(int i=0;i<256;i++){
            if(have[i]<needed[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int> have(256,0);
        vector<int> needed(256,0);
        for(int i=0;i<t.length();i++){
            needed[t[i]]++;
        }
        int low=0;
        // string res="";
        int start=0,res=INT_MAX;
        for(int high=0;high<s.length();high++){
            have[s[high]]++;
            
            while(sahi(have,needed)){
                int len=high-low+1;
                if(res>len){
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                low++;
                
            }

        }
        if(res==INT_MAX){
            return "";
        }
        return s.substr(start,res);



    }
};