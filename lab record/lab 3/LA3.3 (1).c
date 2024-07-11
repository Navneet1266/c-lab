//LA 3.3- Check ODD or EVEN 

#include<stdio.h>

int main()
{
    //clrscr();
    int x;
    printf("enter a no.:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is Even...!!!",x);
    }
    else
    {
        printf("%d is ODD...!!!",x );

    }
    
    

    return 0;


}