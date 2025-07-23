/* Objective: Write a program to find the sum of following series:
S = -1^3 + 3^3 – 5^3 + 7^3 – 9^3 + 11^3 - ……..N terms. */

/* Theory: Cube of Odd numbers is taken and is added if even number of
times the loop is being executed, otherwise added. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int i = 0;
int c = 1;
int s = 0;
int s_1 = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
for (i = 1; i <= (n*2 - 1); i += 2)
{
s_1 = i*i*i;
if (c % 2 != 0)
{
s -= s_1;
}
else
{
s += s_1;
}
c++;
}
printf("Sum of the Series: %d", s);
return 0;
}

/*
Sample Output:
Enter Number: 2
Sum of the Series: 26
*/
