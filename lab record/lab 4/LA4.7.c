//Program to print all odd and even numbers seperately within a given range
#include <stdio.h>

int main()
{
    int i,f, l;

    printf("Enter the first number for the range: ");
    scanf("%d",&f); 
    printf("Enter the second number for the range: ");
    scanf("%d",&l);
    printf("\nDisplay the even numbers between %d and %d are: ",f,l);

    for(i=f; i<=l; i++)
    {
        if(i%2==0)
            printf("\n %d",i);
    }

    printf("\n\nDisplay the odd numbers between %d and %d are: ",f,l);

    for(i=f; i<=l; i++)
    {
        if(i%2==1)
            printf("\n %d",i);
    }
    
    return 0;
}
