/* Objective: Write a C program to add two numbers */

/* Theory: Two Integers ‘a’ and ‘b’ are taken with user-input values. Then
their sum is stored in a third variable ‘c’ which is then printed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 0;
int b = 0;
int c = 0;
system("cls");
printf("Enter a Number: ");
scanf("%d", &a);
printf("Enter a Number: ");
scanf("%d", &b);
printf("\n");
c = a + b;
printf("Sum is : %d", c);
return 0;
}

/*
Sample Output:
Enter a Number: 14
Enter a Number: 21
Sum is : 35
*/
