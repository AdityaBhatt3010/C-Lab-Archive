/* Objective: Write a program to find out the product/Multiplication of two
matrices and print the product matrix. (order of matrices must be given
by user) */

/* Theory: Seven integers, “r1” (number of rows of first matrix), “r2”
(number of rows of second matrix), “c1” (number of columns of first
matrix), “c2” (number of columns of second matrix), ‘i’, ‘j’, ‘k’ along with
three integer matrices “a[][]”, “b[][]” and “c[][]” have been taken. User
defined matrices are “a[][]” and “b[][]”, while their product is stored in
“c[][]”. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int r1 = 0;
int r2 = 0;
int c1 = 0;
int c2 = 0;
int a[10][10];
int b[10][10];
int c[10][10];
int i = 0;
int j = 0;
int k = 0;
system("cls");
printf("Enter the Number of Rows for Matrix A: ");
scanf("%d", &r1);
printf("Enter the Number of Columns for Matrix A: ");
scanf("%d", &c1);
printf("Enter the Number of Rows for Matrix B: ");
scanf("%d", &r2);
printf("Enter the Number of Rows for Matrix B: ");

scanf("%d", &c2);
if (c1 != r2)
{
printf("C1 should be Equal to R2");
return 0;
}
// Input Matrix A
printf("\nFor Matrix A:\n");
for (i = 0; i < r1; i++)
{
for (j = 0; j < c1; j++)
{
printf("Enter the Value at (%d, %d): ", i, j);
scanf("%d", &a[i][j]);
}
}
// Input Matrix B
printf("\nFor Matrix B:\n");
for (i = 0; i < r2; i++)
{
for (j = 0; j < c2; j++)
{
printf("Enter the Value at (%d, %d): ", i, j);
scanf("%d", &b[i][j]);
}
}
// Matrix C
for (i = 0; i < r1; i++)
{
for (j = 0; j < c2; j++)
{
c[i][j] = 0;
}
}
for (i = 0; i < r1; i++)
{
for (j = 0; j < c2; j++)
{
for (k = 0; k < r2; k++)
{

c[i][j] = c[i][j] + a[i][k] * b[k][j];
}
}
}
// print Mat(A) * Mat(B) = Mat(B)
// Mat(A)
printf("\n\n");
for (i = 0; i < r1; i++)
{
for (j = 0; j < c1; j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("\n*\n\n");
// Mat(B)
for (i = 0; i < r2; i++)
{
for (j = 0; j < c2; j++)
{
printf("%d\t", b[i][j]);
}
printf("\n");
}
printf("\n=\n\n");
for (i = 0; i < r1; i++)
{
for (j = 0; j < c2; j++)
{
printf("%d\t", c[i][j]);
}
printf("\n");
}
return 0;
}

/*
Sample Output:
Enter the Number of Rows for Matrix A: 2
Enter the Number of Columns for Matrix A: 3
Enter the Number of Rows for Matrix B: 3
Enter the Number of Rows for Matrix B: 2
For Matrix A:
Enter the Value at (0, 0): 1
Enter the Value at (0, 1): 24
Enter the Value at (0, 2): 35
Enter the Value at (1, 0): 67
Enter the Value at (1, 1): 61
Enter the Value at (1, 2): 25
For Matrix B:
Enter the Value at (0, 0): 43
Enter the Value at (0, 1): 16
Enter the Value at (1, 0): 27
Enter the Value at (1, 1): 46
Enter the Value at (2, 0): 6
Enter the Value at (2, 1): 24

1
67

24
61

*
43
27
6

16
46
24

=
901
4678

1960
4478

35
25
*/
