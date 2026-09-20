class Solution {
public:
    int smallestNumber(int n) {
        int m=n;
        string s="";

        while(m>0){
            int d=m%2;
            s.push_back(d-'0');
            m/=2;

        }
        int len=s.length();
        string str="";
        int i=0;
        while(i<len){
            i++;
            str.push_back('1');

        }
        return pow(2,len)-1;

        
    }
};