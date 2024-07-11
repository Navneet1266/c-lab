//HA 2.1- Average and Percentage

#include<stdio.h>

int main()
{
    //clrscr();
    float a,b,c,d,e;
    printf("Enter Marks of Sub 1 : ");
    scanf("%f",&a);
    printf("Enter Marks of Sub 2 : ");
    scanf("%f",&b);
    printf("Enter Marks of Sub 3 : ");
    scanf("%f",&c);
    printf("Enter Marks of Sub 4 : ");
    scanf("%f",&d);
    printf("Enter Marks of Sub 5 : ");
    scanf("%f",&e);
    // avg=(a+b+c+d+e)/5;
    // p=((a+b+c+d+e)/500)*100;
    printf("Average of all the Subjects are %f \n",(a+b+c+d+e)/5);
    printf("Percentage of all the Subjects are %f \n",((a+b+c+d+e)/500)*100);
    return 0;


}
