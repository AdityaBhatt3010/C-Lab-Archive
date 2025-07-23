/* Objective: Write a program to find the sum of following series:
S = 2+4+6+8+……………N terms */

/* Theory: Three integers “n” (Number), “i” and “s” (Sum)are taken. 2*i is
done “n” number of times. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int i = 0;
int s = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
s += i*2;
}
printf("Sum of the Series: %d", s);
return 0;
}

/*
Sample Output:
Enter Number: 3
Sum of the Series: 12
*/
