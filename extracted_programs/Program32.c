/* Objective: Write a program to find the sum of following series:
1! + 2! + 3! + 4! + ….. + n! */

/* Theory: A function “fact” is created which returns the factorial of the
number and is run “n” number of times and hence it’s sum is calculated. */

#include<stdio.h>
#include<stdlib.h>
int fact(int n);
int main()
{
int k = 0;
int i = 0;
int s = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &k);
for (i = 1; i <= k; i++)
{
s += fact(i);
}
printf("Sum of the Series: %d", s);
return 0;
}
int fact(int n)
{
int f = 1;
while (n > 0)
{
f *= n;
n--;

}
return f;
}

/*
Sample Output:
Enter Number: 5
Sum of the Series: 153
*/
