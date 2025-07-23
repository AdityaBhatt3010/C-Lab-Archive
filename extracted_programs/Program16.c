/* Objective: Write a C program to find smallest of two numbers */

/* Theory: Three float variables are taken where ‘a’ and ‘b’ are user-defined
numbers and minimum is the least of the two numbers and hence
displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float a = 0;
float b = 0;
float min = 0;
system("cls");
printf("Enter Number : ");
scanf("%f", &a);
printf("Enter Number : ");
scanf("%f", &b);
if (a < b)
{
min = a;
}
else
{
min = b;
}
printf("Minimum Number : %f", min);
return 0;
}

/*
Sample Output:
Enter Number : 4
Enter Number : 5
Minimum Number : 4.000000
*/
