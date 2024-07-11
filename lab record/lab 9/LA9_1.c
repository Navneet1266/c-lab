//LA9.1 WAP to store n student’s information of an educational institute and display all the data with total marks of each student, using array of structure

#include <stdio.h>
struct STUDENT
{
int roll;
char name[25];
char gender;
float phy, chem, math, total;
}
main()
{
struct STUDENT s[100];
int i, n, max, min;
float avg, sum=0;
printf("\nEnter how many students:");
scanf("%d", &n);
printf("\nEnter Students details\n");
for(i=0;i<n;i++)
{
printf("\nEnter Students details of student-%d\n", i+1);
printf("\nRoll Number:");
scanf("%d", &s[i].roll);
printf("\nName: ");
scanf("%s",s[i].name);
printf("\nGender: ");
scanf(" %c", &s[i].gender);
printf("\nMarks secured in Physics: ");
scanf("%f", &s[i].phy);
printf("\nMarks secured in Mathematics: ");
scanf("%f", &s[i].math);
printf("\nMarks secured in Chemistry: ");
scanf("%f", &s[i].chem);
s[i].total=s[i].phy+s[i].chem+s[i].math;
}

printf("\nThe Students details are\n");
printf("\nSL\tROLL\tNAME\tGENDER\tPHY\tCHEM\tMATH\tTOTAL");
printf("\n--\t----\t----\t------\t---\t----\t----\t-----");
for(i=0;i<n;i++)
{
printf("\n%d\t%d\t%s\t%c\t%.f\t%.f\t%.2f\t%.f", i+1, s[i].roll, s[i].name, s[i].gender, s[i].phy, s[i].chem, s[i].math, s[i].total );
}

max=0;
min=s[0].phy;
for(i=0;i<n;i++)
{
sum=sum+s[i].phy;
if (min>s[i].phy)
    min=s[i].phy;
if (max<s[i].phy)
    max= s[i].phy;
}
avg=sum/n;
printf("\n");
printf("\nAverage marks in physics is: %f", avg);
printf("\nHighest marks obtained in physics is: %d", max);
printf("\nLowest marks obtained in physics is: %d", min);

max=0, avg=0, sum=0;
min=s[0].chem;
for(i=0;i<n;i++)
{
sum=sum+s[i].chem;
if (min>s[i].chem)
    min=s[i].chem;
if (max<s[i].chem)
    max= s[i].chem;
}
avg=sum/n;
printf("\n");
printf("\nAverage marks in chemistry is: %f", avg);
printf("\nHighest marks obtained in chemistry is: %d", max);
printf("\nLowest marks obtained in chemistry is: %d", min);

max=0, avg=0, sum=0;
min=s[0].math;
for(i=0;i<n;i++)
{
sum=sum+s[i].math;
if (min>s[i].math)
    min=s[i].math;
if (max<s[i].math)
    max= s[i].math;
}
avg=sum/n;
printf("\n");
printf("\nAverage marks in mathematics is: %f", avg);
printf("\nHighest marks obtained in mathematics is: %d", max);
printf("\nLowest marks obtained in mathematics is: %d", min);
}
