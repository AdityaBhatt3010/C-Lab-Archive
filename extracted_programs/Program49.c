/* Objective: Write a program in C to print the following pattern
5

5

5

4

5

5

4

3

4

5

4

3

2

3

4

5 */

/* Theory: Four integers “r” (row) and “c” (column), “r_1” (copy of “r”) and
“i” have been taken and using the nested for loop, the (6 - column
number) pattern is printed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int r = 0;
int r_1 = 0; // Copy of r
int c = 0;
int i = 0;
system("cls");
for (r=1; r<5; r++)
{
r_1 = r;
for (i = 1; i < (5 - r); i++)
{
printf("\t");
}
for (c = 1; c <= r; c++)
{
printf("%d\t", 6-c);
}
for (c=(r-1); c>=1; c--)
{
printf("%d\t", 6-c);
}

printf("\n");
}
return 0;
}

/*
Sample Output:
5

5
4

5
4
3

5
4
3
2

5
4
3

5
4

5
*/
