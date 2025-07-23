/* Objective: Write a C program to find all prime numbers between given interval
using functions. */

/* Theory: User defined function “checkPrimeNumber” is used to check for prime
numbers between “n1” and “n2”. “flag” is used check for prime number. “I”
and “j” are loop variables. */

#include<stdio.h>
#include<stdlib.h>
int checkPrimeNumber(int n);
int main()
{
int n1 = 0;
int n2 = 0;
int i = 0;
int temp = 0;
int flag = 0;
system("cls");
printf("Enter two positive integers: ");
scanf("%d %d", &n1, &n2);
if (n1 > n2)
{
temp = n1;
n1 = n2;
n2 = temp;
}
printf("Prime numbers between %d and %d are: ", n1, n2);
for (i = n1 + 1; i < n2; ++i)
{
flag = checkPrimeNumber(i);
if (flag == 1)
{
printf("%d ", i);
}

}
return 0;
}
int checkPrimeNumber(int n)
{
int j = 0;
int flag = 1;
for (j = 2; j <= n / 2; ++j)
{
if (n % j == 0)
{
flag = 0;
break;
}
}
return flag;
}

/*
Sample Output:
Enter two positive integers: 45 73
Prime numbers between 45 and 73 are: 47 53 59 61 67 71
*/
