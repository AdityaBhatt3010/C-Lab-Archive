/* Objective: Write a program to find the sum of following series:
S = 1^4 + 3^4 + 5^4 + 7^4 + …………….. 100 terms */

/* Theory: Two variables, long long “sum” (sum of the series) alond with int
“i” have been taken and hence the sum of the series is calculated using
for loop and hence displayed. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
long long sum = 0;
int i = 0;
system("cls");
for (i = 0; i < 100; i++)
{
sum += pow(((i * 2) - 1), 4);
}
printf("Sum of the Series is: %lld", sum);
return 0;
}

/*
Sample Output:
Sum of the Series is: 30429094155
*/
