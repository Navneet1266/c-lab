//LA6.6 WAP to generate the first n terms of the sequence by writing a suitable user defined function (say fib) to be used to get nth term Fibonacci value.

#include<stdio.h>
void fib(int range)
{
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d\n", a);
     c = a+b;
     a = b;
     b = c;
   }
}

int main()
{
   int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   fib(range);

   return 0;
}
