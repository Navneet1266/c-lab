//Program to print provided no. in reverse order

#include<stdio.h>  
 int main()    
{    
    int n, rev=0;    
    printf("Enter a number: ");    
    scanf("%d", &n);    
    while(n!=0)    
    {        
        rev=(rev*10)+(n%10);    
        n/=10;    
    }    
    printf("Reversed Number: %d",rev);    
    return 0;  
}   