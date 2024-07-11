//LA-4.5 Program to print 1 1 2 3 5 8 13 ... n where n is given by user //FIBONACCI SERIES

#include<stdio.h> 
int main()
{
    int i,n,a=0,b=1,c;
    
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    printf(" %d ",1);
    
    for( i=1;i<n;i++)
    {
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
        
    }
    // printf("\n%d ",&c);
    return 0;
}
