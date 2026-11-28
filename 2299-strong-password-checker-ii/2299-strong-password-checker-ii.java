class Solution {
    public boolean strongPasswordCheckerII(String password) {
        boolean found=false;
        if(password.length()<8){
            return false;
        }
        
        else{
            int upp=0,low=0,dig=0,spe=0;
            for(int i=0;i<password.length();i++){
                if(password.charAt(i)>='A' && password.charAt(i)<='Z'){
                    upp++;
                }
                else if(password.charAt(i)>='a' && password.charAt(i)<='z'){
                    low++;
                }
                else if(password.charAt(i)>='0' && password.charAt(i)<='9'){
                    dig++;
                }
                else{
                    spe++;
                }


            }
            
            if(low>0 && upp>0 && spe>0 && dig>0){
                found=true;
            }
            
            if(found){
                // int i=0;
                
                for(int i=1;i<password.length();i++){
                    int j=i-1;
                    if(password.charAt(i)==password.charAt(j)){
                        found=false;
                        break;

                    }
                }
            }
            if(!found){
                return false;
            }
            return true;

        }

        
    }
}