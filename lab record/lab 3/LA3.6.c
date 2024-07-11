//LA 3.5- Input 2 integers and ask user for desired operation and display the result 

#include<stdio.h>

int main()
{
    //clrscr();
    int x,o;
    
    printf("enter Total Marks secured");
    scanf("%d",&x);
    printf("For addition click: 1\n For Subtraction click: 2\n For Multiplication click: 3\n For Division click: 4\n");
    scanf("%d",&o);

    if(x>=90&&x<=100)
    {
        printf("Your grade is O ");
    }
    else if(x>=80&&x<=89)
    {
        printf("Your grade is E");
    }
    else if(x>=70&&x<=79)
    {
        printf("Your grade is A");
    }
    else if(x>=60&&x<=69)
    {
        printf("Your grade is B");
    }
    else if(x>=50&&x<=59)
    {
        printf("Your grade is C");
    }
    else if(x>=40&&x<=49)
    {
        printf("Your grade is D");
    }
    else if(x<40)
    {
        printf("Your grade is F");
    }
    else
    printf("Please enter your total marks correctly :)");
    
    

    return 0;


}
