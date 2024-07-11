//LA 3.2- Input 3 integers and display greater of 3 integers 

#include<stdio.h>

int main()
{
    //clrscr();
    int x,y,z;
    printf("enter 3 no.s:");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
        if(z>x)
        printf("%d is the Greter no. among %d, %d and %d",z,x,y,z);
        else
        printf("%d is the Greter no. among %d, %d and %d",x,x,y,z);
    }
    if(y>x)
    {
         if(z>y)
        printf("%d is the Greter no. among %d, %d and %d",z,x,y,z);
        else
        printf("%d is the Greter no. among %d, %d and %d",y,x,y,z);

    }
    
    return 0;


}
