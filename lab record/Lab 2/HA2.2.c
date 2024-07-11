 //HA 2.2- Swapping in single statement 

#include<stdio.h>

int main()
{
    //clrscr();
    int x,y;
    printf("enter 2 no.s:");
    scanf("%d%d",&x,&y);
    (x=y),(y=x),(x=y);
    


    printf("after swapping of 2 no.s x=%d, y=%d",x,y);

    return 0;


}
 
 
 
 
