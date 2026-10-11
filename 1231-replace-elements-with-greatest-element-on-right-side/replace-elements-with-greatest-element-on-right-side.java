class Solution {
    public int[] replaceElements(int[] arr) {
        for(int i=0;i<arr.length;i++){
            int maxi=Integer.MIN_VALUE;
            for(int j=i+1;j<arr.length;j++){
                maxi=Math.max(maxi,arr[j]);
            }
            if(i==arr.length-1) arr[i]=-1;
            else arr[i]=maxi;
        }
        return arr;
    }
}