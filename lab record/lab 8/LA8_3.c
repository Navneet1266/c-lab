//LA8.3 WAP to display values in reverse order from an integer array using pointer.

#include<stdio.h>  
  
#define N 5  
  
int main()  
{  
    int a[N], i, *ptr;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i = 0; i < N; i++)  
        scanf("%d", &a[i]);  
  
    ptr = &a[N - 1];  
  
    printf("\nElements of array in reverse order ...\n");  
    for(i = 0; i < N; i++)  
        printf("%d\n", *ptr--);  
  
    return 0;  
}
