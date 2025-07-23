/* Objective: WAP to calculate the root of a Quadratic Equation */

/* Theory: By using the equation ax^2 + bx + c = 0 with the solution x = (-b +(b^2 + 4*a*c)^(1/2))/2*a */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
// Equation : ax^2 + bx + c = 0
float a = 0;
float b = 0;
float c = 0;
float x1 = 0;
float x2 = 0;
system("cls");
printf("Enter the Coefficient of x^2 : ");
scanf("%f", &a);
printf("Enter the Coefficient of x : ");
scanf("%f", &b);
printf("Enter the Constant : ");
scanf("%f", &c);
x1 = (((-b) + sqrt((b*b) - 4*a*c)) / 2*a);
x2 = (((-b) - sqrt((b*b) - 4*a*c)) / 2*a);
printf("Solutions to the Equation : %f, %f", x1, x2);
return 0;
}

/*
Sample Output:
Enter Number : 5
Enter Number : 6
Enter Choice (Integer Only) :

1. Addition
2. Subtraction
3. Multiplication
4. Division
1
5.000000 + 6.000000 = 11.000000
*/
