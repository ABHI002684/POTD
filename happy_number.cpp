class Solution {
public:
    bool isHappy(long int n) {
        int sum=0;
      while(n>0 )
      {
          int k=n%10;
          sum+=k*k;
          n/=10;
      }
      n=sum;
      if(n==1)
      {
          return true;
      }
      else if(n==7){
          return true;
      }
      else if(n>=2 && n<=9)
      {
          return false;
      }
      else{
          return isHappy(n);
      }
 }
};