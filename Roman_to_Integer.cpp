class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
   for(int x=0;x<s.size();x++){
       if(s[x]=='I'){
         if(s[x+1]=='V'){
             sum+=4;
             x++;
         }
         else if(s[x+1]=='X'){
            sum+=9;
            x++;
         }
         else{
            sum+=1;
         }
      }
     else if(s[x]=='X'){
        if(s[x+1]=='L'){
           sum+=40;
           x++;
        }
        else if(s[x+1]=='C'){
          sum+=90;
          x++;
        }
        else{
          sum+=10;
        }
     }
     else if(s[x]=='C'){
         if(s[x+1]=='D'){
             sum+=400;
             x++;
         }
         else if(s[x+1]=='M'){
            sum+=900;
            x++;
         }
         else{
            sum+=100;
         }
      }
      else if(s[x]=='V') sum+=5;
      else if(s[x]=='L') sum+=50;
      else if(s[x]=='D') sum+=500;
      else if(s[x]=='M') sum+=1000;
   }
   return sum;
    }
};
