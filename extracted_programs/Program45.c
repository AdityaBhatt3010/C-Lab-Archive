/* Objective: Write a program in C to print the following pattern
3
3

2

3

2

1 */

/* Theory: Two integers “r” (row) and “c” (column) have been taken and
using the nested for loop, the column number is printed wherever row
number is lesser than or equal to column number in reverse order. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int r = 0;
int c = 0;
system("cls");
for (r = 3; r >= 1; r--)
{
for (c = 3; c >= 1; c--)
{
if (r <= c)
{
printf("%d\t", c);
}
}
printf("\n");
}
return 0;
}

/*
Sample Output:
3
3
3

2
2

1
*/
