/* Objective: Write a C Program to implement Simple Calculator (Addition,
Subtraction, Multiplication, Division) using the concept of function */

/* Theory: Using four user defined functions, “add”, “subtract”, “multiply”
and “divide” perform the calculation on the user given float numbers,
“n_1” and “n_2”. */

#include<stdio.h>
#include<stdlib.h>
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);
int main()
{
float n_1 = 0;
float n_2 = 0;
system("cls");
printf("Enter First Number: ");
scanf("%f", &n_1);
printf("Enter Second Number: ");
scanf("%f", &n_2);
printf("\n");
printf("%.2f\t+\t%.2f\t=\t%.2f\n", n_1, n_2, add(n_1, n_2));
printf("%.2f\t-\t%.2f\t=\t%.2f\n", n_1, n_2, subtract(n_1, n_2));
printf("%.2f\t*\t%.2f\t=\t%.2f\n", n_1, n_2, multiply(n_1, n_2));
printf("%.2f\t/\t%.2f\t=\t%.2f\n", n_1, n_2, divide(n_1, n_2));
return 0;
}
float add(float x, float y)
{
return (x + y);

}
float subtract(float x, float y)
{
return (x - y);
}
float multiply(float x, float y)
{
return (x * y);
}
float divide(float x, float y)
{
return (x / y);
}

/*
Sample Output:
Enter First Number: 25
Enter Second Number: 12
25.00
25.00
25.00
25.00

+
*
/

12.00
12.00
12.00
12.00

=
=
=
=

37.00
13.00
300.00
2.08
*/
