//LA 3.5- Input 2 integers and ask user for desired operation and display the result 

#include<stdio.h>

int main()
{
    //clrscr();
    int x,y,o;
    
    printf("enter 2 no.s:");
    scanf("%d%d",&x,&y);
    printf("For addition click: 1\n For Subtraction click: 2\n For Multiplication click: 3\n For Division click: 4\n");
    scanf("%d",&o);

    if(o==1)
    {
        printf("%d + %d = %d",x,y,x+y);
    }
    else if(o==2)
    {
        printf("%d - %d = %d",x,y,x-y);
    }
    else if(o==3)
    {
        printf("%d * %d = %d",x,y,x*y);
    }
    else if(o==4)
    {
        printf("%d / %d = %d",x,y,x/y);
    }
    else
    printf("Invalid choice please Choose properly :)");
    
    

    return 0;


}