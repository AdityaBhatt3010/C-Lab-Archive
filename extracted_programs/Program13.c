/* Objective: Write a C program to check whether a triangle is right angles,
obtuse, acute triangle */

/* Theory: Four variables are taken, ‘a’, ‘b’ and ‘c’ are user-defined angles
and “max” is the maximum angle between the two. If “max” is greater
than 90, it is an obtuse triangle, if it is 90, triangle is right angle triangle
else acute triangle. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float a = 0;
float b = 0;
float c = 0;
float max = 0;
system("cls");
printf("Enter angle : ");
scanf("%f", &a);
printf("Enter Angle : ");
scanf("%f", &b);
printf("Enter Angle : ");
scanf("%f", &c);
printf("\n");
if (a > b)
{
if (a > c)
{
max = a;
}
else
{
max = c;
}
}
else if (b > c)
{

max = b;
}
else
{
max = c;
}
if (max > 90)
{
printf("Obtuse Triangle");
}
else if (max == 90)
{
printf("Right Triangle");
}
else
{
printf("Acute Triangle");
}
return 0;
}

/*
Sample Output:
Enter angle : 51
Enter Angle : 54
Enter Angle : 92
Obtuse Triangle
*/
