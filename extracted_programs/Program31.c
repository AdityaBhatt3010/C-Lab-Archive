/* Objective: Write a program to find the sum of following series:
1 – 1/2 + 1/3 – 1/4 + 1/5 - …… up to n terms */

/* Theory: Two integers “i” and “n” are taken along with three float “i_f”,
“s”, “f” are taken and hence the series sum is obtained. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int i = 0;
int n = 0;
float i_f = 0; // float i
float s = 1;
// sum
float f = 0;
// (1 / i)
system("cls");
printf("Enter Number of Terms : ");
scanf("%d", &n);
for (i = 2; i <= n; i++)
{
i_f = ((float) (i));
f = (1 / i_f);
if (i % 2 == 0)
{
s -= f;
}
else
{
s += f;
}
}
printf("Sum of the Series is : %f", s);
return 0;
}

/*
Sample Output:
Enter Number of Terms : 5
Sum of the Series is : 0.783333
*/
