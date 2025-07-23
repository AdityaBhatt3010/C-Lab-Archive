/* Objective: Write a program to print all prime numbers <= a given number. */

/* Theory: Four integers “n” (number), “i”, “j” and “c” (counter) have been
used to print whether a number is prime until “n” numbers. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int i = 0;
int j = 0;
int c = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
printf("\n");
for (i = 2; i <= n; i++)
{
c = 0;
for (j = 2; j < i; j++)
{
if (i % j == 0)
{
c++;
}
}
if (c == 0)
{
printf("%d is a Prime Number\n", i);
}
}
return 0;
}

/*
Sample Output:
Enter Number: 20
2 is a Prime Number
3 is a Prime Number
5 is a Prime Number
7 is a Prime Number
11 is a Prime Number
13 is a Prime Number
17 is a Prime Number
19 is a Prime Number
*/
