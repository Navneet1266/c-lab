//LA 2.5 Swapping of two No.s without using Third variable

#include <stdio.h>

int main()
{
    int a,b;
    printf("\n Enter 2 integers a and b :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("\n After swapping of two No.s a=%d and b=%d",a,b);

    return 0;
}
