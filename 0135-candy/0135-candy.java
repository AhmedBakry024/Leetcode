class Solution {
    public int candy(int[] ratings) {
        int n = ratings.length;
        int c = 0;
        int[] kids = new int[n];
        for(int i =0;i<n;i++) kids[i]=1;
        for(int i =1;i<n;i++){
            if(ratings[i]> ratings[i-1]){
                kids[i] = kids[i-1] + 1;
            }
        }
        for(int i =n-1;i>0;i--){
            if(ratings[i-1]> ratings[i]){
                kids[i-1] = Math.max(kids[i] + 1, kids[i-1]);
            }
            c += kids[i-1];
        }
        return c + kids[n-1];
    }
}