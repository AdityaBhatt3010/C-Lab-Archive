/* Objective: Write a program in C to print the following pattern:
1
1

2

1

2

3 */

/* Theory: Two integers “r” (row) and “c” (column) have been taken and
using the nested for loop, the column number is printed wherever row
number is greater than or equal to column number. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int r = 0;
int c = 0;
system("cls");
for (r = 1; r <= 3; r++)
{
for (c = 1; c <= 3; c++)
{
if (r >= c)
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
1
1
1

2
2

3
*/
