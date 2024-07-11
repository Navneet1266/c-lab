//LA7.3 WAP to check whether a string entered through keyboard is palindrome or not.

#include <string.h>
 
int main()
{
    char s[1000];  
    int i,n,c=0;
    puts("Enter the string =");
    gets(s);
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    puts("string is palindrome");
    else
        puts("string is not palindrome");
     
    return 0;
}

