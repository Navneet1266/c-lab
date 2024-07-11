// 5.1 WAP to input 10 integers into an array of size 10. Print all elements.

#include<stdio.h>
  
int main()  
{  
    int arr[10]; 
    int i;  
  
    printf("Input 10 elements in the array :\n");  
    for(i=1; i<=10; i++)  
    {  
	    printf("Integer - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nIntegers in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");
    
	return 0;	
}


