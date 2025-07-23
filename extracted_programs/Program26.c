/* Objective: Write a program in C to accept an integer numbers and find
sum of digits. */

/* Theory: Two integers “n” (Number) and “s” (Sum of Digits) are taken. “n”
is divided by 10 until it is greater than 0 and each time it’s remainder with
10 is taken and added to digit sum */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int s = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
while(n > 0)
{
s += n%10;
n /= 10;
}
printf("Digit Sum is %d", s);
return 0;
}

/*
Sample Output:
Enter Number: 52
Digit Sum is 7
*/
