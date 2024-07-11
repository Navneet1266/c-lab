//LA7.4 Write a program to count the number of characters, alphabets, tabs, newlines, words, vowels, consonants present in a in a string.


#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int l=0,b=0,t=0,n=0,s=0,w=0,v=0,c=0;
    printf("\nEnter the string:");
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
        l++;
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        b++;
        if(a[i]=='\t')
        t++;
        if(a[i]=='\n')
        n++;
        if(a[i]==' ')
        s++;
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        v++;
        else
        c++;
    }
    if(s==0)
    w=1;
    else
    w=s+1;
    printf("\nTHE NO. OF CHARACTERS IN THE STRING IS %d",l);
    printf("\nTHE NO. OF ALPHABETS IN THE STRING IS %d",b);
    printf("\nTHE NO. OF TABS IN THE STRING IS %d",t);
    printf("\nTHE NO. OF NEWLINES IN THE STRING IS %d",n);
    printf("\nTHE NO. OF WORDS IN THE STRING IS %d",w);
    printf("\nTHE NO. OF VOWELS IN THE STRING IS %d",v);
    printf("\nTHE NO. OF CONSONANTS IN THE STRING IS %d",c);
    return 0;    
    
}

