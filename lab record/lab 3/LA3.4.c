//LA 3.4- UPPER case to LOWER case 

#include<stdio.h>

int main()
{
    //clrscr();
    char x;
    printf("enter an alphabet:");
    scanf("%c",&x);
    if(x>=65&&x<=90)
    {
        printf("%c",x+32);
        printf("\nThe Upper case is converted to lower case :)");
    }
    else
    {
        printf("Already in Lower Case  %c",x);
    }
    
    

    return 0;


}