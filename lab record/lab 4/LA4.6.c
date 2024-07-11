//LA-4.6 Program to write 3 5 7 11 13 17...n

#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the Number last no. : ");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        m=0;
        if(i>2)
        {
            for(j=1; j<=n; j++)
            {
                if(i%j==0)
                    m++;
            }
            if(m==2)
                printf("%d " ,i);
        }
    }
    return 0;
}
