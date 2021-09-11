class Solution {
    private:
        int binary(int a, int pow, int m){
             a=a%m;
            int ans=1;
             while(pow){
               if(pow&1){
                  ans=(ans % m * a % m ) % m;
               }
               a=(a * a * 1ll)%m;
               pow=pow>>1;
            }
                 
            return ans;
       }
public:
    int superPow(int a, vector<int>& b) {
        // as 1140 is etf of 1337
       int ans=0;
       int power=1;
       for(int x=b.size()-1;x>=0;x-- ){
          ans=(ans % 1140 + (b[x]  * power % 1140 ) )% 1140;
          power=( power % 1140 * 10) % 1140;
       }
       return binary(a,ans,1337);
    }
};
