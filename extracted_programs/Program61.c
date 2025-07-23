/* Objective: Write a C Program to swap two values using function */

/* Theory: Using user defined function “swap”, the values of ‘x’ and ‘y’ are
being swapped. */

#include<stdio.h>
#include<stdlib.h>
void swap (int, int);
int main()
{
int x = 0;
int y = 0;
system("cls");
printf("Enter First Number: ");
scanf("%d", &x);
printf("Enter Second Number: ");
scanf("%d", &y);
printf("\n");
swap(x, y);
return 0;
}
void swap (int a, int b)
{
int temp = 0;
printf("Original Values are:\n");
printf("x\t:\t%d\n", a);
printf("y\t:\t%d\n", b);
temp = a;
a = b;
b = temp;

printf("Values after Swapping are:\n");
printf("x\t:\t%d\n", a);
printf("y\t:\t%d\n", b);
}

/*
Sample Output:
Enter First Number: 5
Enter Second Number: 7
Original Values are:
x
:
5
y
:
7
Values after Swapping are:
x
:
7
y
:
5
*/
