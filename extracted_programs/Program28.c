/* Objective: Write a program in C to accept an integer numbers and to
check a number is Armstrong or not */

/* Theory: Four integer variables, “a” (Number to be checked), “b”, “c” and
“arm” are taken. Cube of each digit is taken and added into the variable
“arm” which is then compared to the original number. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 0;
int b = 0;
int c = 0;
int arm = 0;
system("cls");
printf("Enter Number : ");
scanf("%d", &a);
c = a;
while (a)
{
b = a % 10;
arm += b*b*b;
a /= 10;
}
if (arm == c)
{
printf("%d is Armstrong Number", c);
}
else
{
printf("%d is not Armstrong Number", c);
}

return 0;
}

/*
Sample Output:
Enter Number : 153
153 is Armstrong Number
*/
