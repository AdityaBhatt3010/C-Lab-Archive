/* Objective: Write a program to check a number whether it is prime
number or not */

/* Theory: Three integers “n” (Number to be checked), “i” and “c” (count)
are taken. It is then checked whether it is divisible by any number smaller
than itself or not and hence the decision of being prime number or not. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int i = 0;
int c = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
for (i = 2; i < n; i++)
{
if (n % i == 0)
{
c++;
}
}
if (c == 0)
{
printf("%d is a Prime Number", n);
}
else
{
printf("%d is not a Prime Number", n);
}
return 0;
}

/*
Sample Output:
Enter Number: 5
5 is a Prime Number
*/
