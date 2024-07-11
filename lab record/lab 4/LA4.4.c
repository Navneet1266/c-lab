//Program to print 1 3 7 15 31 ... n where n is given by user

#include<stdio.h> 
#include<math.h>
int main()
{
    int i,n,x=1;
    // int s;
    printf("Enter the last no. to be printed : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i*2+1)
    {
            printf("%d ",i);
               
            // printf("%d ",x);     
            // x=x*2+1;
            
            // s=round(pow(2,i)-1);
            // printf("%d ",s);

        
    }
    
    return 0;
}
