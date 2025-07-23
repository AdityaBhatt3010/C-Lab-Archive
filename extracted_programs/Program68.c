/* Objective: Write a C program to find power of any number using recursion */

/* Theory: “power” is a user defined function to find the power of a number.
“n1” and “n2” are the variables who get passed the values of “base” and “a”.
“result” stores the answer found after finding the power of a number. */

#include<stdio.h>
#include<stdlib.h>
int power(int n1, int n2);
int main()
{
int base = 0;
int a = 0;
int result = 0;
system("cls");
printf("Enter base number: ");
scanf("%d", &base);
printf("Enter power number(positive integer): ");
scanf("%d", &a);
result = power(base, a);
printf("%d^%d = %d", base, a, result);
return 0;
}
int power(int base, int a)
{
if (a != 0)
return (base * power(base, a - 1));
else
return 1;
}

/*
Sample Output:
Enter base number: 5
Enter power number(positive integer): 2
5^2 = 25
*/
