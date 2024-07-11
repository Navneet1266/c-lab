//LA 3.1- Input 2 integers and display greater of two integers 

#include<stdio.h>
#include<conio.h>
int main()
{
    //clrscr();
    int x,y;
    printf("enter 2 no.s:");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        printf("%d is the Greter no. between %d and %d",x,x,y );
    }
    else
    {
        printf("%d is the Greter no. between %d and %d",y,y,x );

    }
    
    

    return 0;


}