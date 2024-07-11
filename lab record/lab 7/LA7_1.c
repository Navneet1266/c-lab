//LA7.1 WAP to extract the last character of each word of a given string.

#include <stdio.h> 
#include<string.h> 
 
int main(void)  
{ 
	char c[100]; 
	printf("Enter a sting value = "); 	
	scanf("%s",c); 
	int l = strlen(c)-1; 
	printf("Last character of string is %c",c[l]); 
	return 0; 
} 

