/* Objective: Write a program to accept two matrices of some order. (Order
must be given by user) find out the subtraction of these matrices and
print the difference of matrices. */

/* Theory: : Four Integers, ‘r’ (rows), ‘c’ (columns), ‘i’ and ‘j’ are taken along
with three integer arrays “x[][]”, “y[][]” and “z[][]” have been taken.
Number of rows and columns are user given and hence the user defined
matrices are “x[][]” and “y[][]”, while their difference is stored in “z[][]”
and hence displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int x[10][10];
int y[10][10];
int z[10][10];
int r = 0;
int c = 0;
int i = 0;
int j = 0;
system("cls");
printf("Enter Number of Rows: ");
scanf("%d", &r);
printf("Enter Number of Columns: ");
scanf("%d", &c);
printf("\nFor First Matrix:\n");
for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
printf("Enter Value at (%d, %d): ", i, j);
scanf("%d", &x[i][j]);

}
}
printf("\nFor Second Matrix:\n");
for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
printf("Enter Value at (%d, %d): ", i, j);
scanf("%d", &y[i][j]);
}
}
for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
z[i][j] = x[i][j] - y[i][j];
}
}
printf("\n\n");
for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
printf("%d\t", x[i][j]);
}
printf("\n");
}
printf("\n-\n\n");
for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
printf("%d\t", y[i][j]);
}
printf("\n");
}
printf("\n=\n\n");
for (i = 0; i < r; i++)
{

for (j = 0; j < c; j++)
{
printf("%d\t", z[i][j]);
}
printf("\n");
}
return 0;
}

/*
Sample Output:
Enter Number of Rows: 3
Enter Number of Columns: 2
For First Matrix:
Enter Value at (0, 0): 23
Enter Value at (0, 1): 45
Enter Value at (1, 0): 91
Enter Value at (1, 1): 65
Enter Value at (2, 0): 23
Enter Value at (2, 1): 16
For Second Matrix:
Enter Value at (0, 0): 15
Enter Value at (0, 1): 13
Enter Value at (1, 0): 49
Enter Value at (1, 1): 25
Enter Value at (2, 0): 23
Enter Value at (2, 1): 32

23
91
23

45
65
16

15
49
23

13
25
32

=
8
42
0

32
40
-16
*/
