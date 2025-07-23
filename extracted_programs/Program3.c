/* Objective: Write a C program to find area of circle */

/* Theory: Two variables, an integer “radius” and a float “area” are taken
and using the formula (pi) 3.14*radius*radius, area of the circle is
computed and stored in the variable “area”. */

#include <stdio.h>
int main()
{
int radius = 0;
float area = 0;
printf("Enter Radius : ");
scanf("%d", &radius);
area = 3.14 * radius * radius;
printf("Area of Circle with Radius %d units is %f units", radius, area);
printf("\n");
return 0;
}

/*
Sample Output:
Enter Radius : 32
Area of Circle with Radius 32 units is 3215.360107 units
*/
