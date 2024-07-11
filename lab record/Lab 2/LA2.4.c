
 //LA 2.4 Area of a triangle, given three sides
 
#include <stdio.h>
#include <math.h>
 
void main()
{
    int s, a, b, c, area;
 
    printf("Enter the values of Length of three sides : ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of a triangle = %d \n", area);
}