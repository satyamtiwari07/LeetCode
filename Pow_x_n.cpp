class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
       return myPow(1/x,abs(n));
       }
       if(n==0){
           return 1.00000;
       }

       if(n&1){
           // n is odd
          return x*myPow(x,n-1);

       }     
       else{
           // n is even
           double a=myPow(x,n/2);
         return a*a;
       }  
    }
};
