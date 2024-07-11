//HA 2.3 Adding two times

//#include<bits/stdc++.h>
#include<stdio.h>

int main()
{
    //system("cls");
    int h1,h2,m1,m2,s1,s2,s,m,h;
    printf("Enter 1st time in Hours : Minutes : Seconds format - ");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("Enter 2nd time in Hours : Minutes : Seconds format - ");
    scanf("%d%d%d",&h2,&m2,&s2);

    s=s1+s2;
    
    m=m1+m2+(s/60);

    h=h1+h2+(m/60);
    m=m%60;
    s=s%60;

    printf("The added time is %d:%d:%d",h,m,s);
}