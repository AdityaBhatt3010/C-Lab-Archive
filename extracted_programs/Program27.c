/* Objective: Write a program in C to accept an integer numbers and check
this number for palindrome */

/* Theory:  */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 0;
int z = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int h = 0;
int x[10];
int y[10];
system("cls");
printf("Enter Number : ");
scanf("%d", &a);
z = a;
while (a > 0)
{
b++;
a /= 10;
}
a = z;
for (c = 0; c < b; c++)
{
d = a % 10;
x[c] = d;

a /= 10;
}
a = z;
for (e = b-1; e >= 0; e--)
{
f = (b-1) - e;
y[f] = x[e];
}
for (g = 0; g < b; g++)
{
if (x[g] != y[g])
{
h--;
}
}
if (h == 0)
{
printf("%d is a Palindrome", a);
}
else
{
printf("%d is not a Palindrome", a);
}

return 0;
}

/*
Sample Output:
Enter Number : 121
121 is a Palindrome
*/
