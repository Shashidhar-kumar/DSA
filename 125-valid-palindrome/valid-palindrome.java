class Solution {
    public boolean isPalindrome(String s) {

        String st="";
        for(int i=0;i<s.length();i++){
            char ch=Character.toLowerCase(s.charAt(i));
            if(Character.isLetterOrDigit(ch)){
                st=st+ch;
            }
        }
        int x=0;
        int j=st.length()-1;
        while(x<j){
            if(st.charAt(x)!=st.charAt(j)){
                return false;
            }
            x++;
            j--;
        }
        return true;
    }
}