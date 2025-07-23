/* Objective: Write a program to accept two matrices of some order. (Order
must be given by user) find out the sum of these matrices and print the
sum of matrices. */

/* Theory: Four Integers, ‘r’ (rows), ‘c’ (columns), ‘i’ and ‘j’ are taken along
with three integer arrays “x[][]”, “y[][]” and “z[][]” have been taken.
Number of rows and columns are user given and hence the user defined
matrices are “x[][]” and “y[][]”, while their sum is stored in “z[][]” and
hence displayed. */

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
z[i][j] = x[i][j] + y[i][j];
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
printf("\n+\n\n");
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
Enter Number of Rows: 2
Enter Number of Columns: 3
For First Matrix:
Enter Value at (0, 0): 24
Enter Value at (0, 1): 3
Enter Value at (0, 2): 25
Enter Value at (1, 0): 16
Enter Value at (1, 1): 234
Enter Value at (1, 2): 37
For Second Matrix:
Enter Value at (0, 0): 16
Enter Value at (0, 1): 24
Enter Value at (0, 2): 35
Enter Value at (1, 0): 1
Enter Value at (1, 1): 43
Enter Value at (1, 2): 35

24
16

3
234

25
37

24
43

35
35

27
277

60
72

+
16
1
=
40
17
*/
