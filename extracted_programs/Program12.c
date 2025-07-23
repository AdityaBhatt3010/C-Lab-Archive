/* Objective: Write a C program to check whether a triangle is Equilateral,
scalene, or isosceles */

/* Theory: If all three sides are equal, then the triangle is an equilateral
triangle, if two are equal, then Isosceles, otherwise Scalene */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float a = 0;
float b = 0;
float c = 0;
system("cls");
printf("Enter Side 'a' : ");
scanf("%f", &a);
printf("Enter Side 'b' : ");
scanf("%f", &b);
printf("Enter Side 'c' : ");
scanf("%f", &c);
printf("\n");
if ((a == b) && (b == c))
{
printf("Equilateral Triangle");
}
else if ((a == b) || (a == c))
{
printf("Isosceles Triangle");
}
else
{
printf("Scalene Triangle");
}
return 0;
}

/*
Sample Output:
Enter Side 'a' : 45
Enter Side 'b' : 45
Enter Side 'c' : 45
Equilateral Triangle
*/
