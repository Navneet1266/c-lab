//LA6.2 WAP to find out ncr factor by using a user defined function for factorial (say fact).

#include <stdio.h>
    int main(){
      int n,r,ncr;
      printf("Enter any two numbers->");
      scanf("%d%d",&n,&r);
      ncr=fact(n)/(fact(r)*fact(n-r)); //fact denotes factorial of a number .
      printf("The NCR factor of %d and %d is %d",n,r,ncr);
      return 0;
    }
     int fact(int n) // this is a factorial finding function
    { 
      int i=1;
      while(n!=0){
          i=i*n;
          n--;
      }
      return i;
     }

