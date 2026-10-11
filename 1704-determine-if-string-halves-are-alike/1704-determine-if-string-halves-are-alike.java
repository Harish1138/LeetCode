class Solution {
    public boolean alike(String s1,String s2){
        int v1=0;
        int v2=0;
        for(char c:s1.toCharArray()){
            char ch=Character.toLowerCase(c);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                v1++;
            }
        }
        for(char c:s2.toCharArray()){
            char ch=Character.toLowerCase(c);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                v2++;
            }
        }
        return v1==v2;

    }
    public boolean halvesAreAlike(String s) {
        String s1="";
        String s2="";
        int n=s.length();
        int half=n/2;


        for(int i=0;i<n;i++){
            if(i<half){
                s1+=s.charAt(i);

                
            }
            else{
                s2+=s.charAt(i);
            }
        }
        return alike(s1,s2);


        
    }
}