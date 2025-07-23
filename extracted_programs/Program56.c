/* Objective: Write a program in C that accepts N*N matrix as input and
print transpose of this matrix */

/* Theory: Three integers ‘n’ (number of terms), ‘i’, ‘j’ along with two
matrices “a[][]” and b”[][]”. Original matrix is stored in “a[][]” and later
the row and column values arte swapped in “b[][]”. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10];
int b[10][10];
int n = 0;
int i = 0;
int j = 0;
system("cls");
printf("Enter Number of Rows and Columns: ");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("Enter Value at (%d, %d): ", i, j);
scanf("%d", &a[i][j]);
}
}
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
b[i][j] = a[j][i];
}
}

printf("\nOriginal Matrix:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("\nTranspose of the Matrix:\n");
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
printf("%d\t", b[i][j]);
}
printf("\n");
}
return 0;
}

/*
Sample Output:
Enter Number of Rows and Columns: 3
Enter Value at (0, 0): 1
Enter Value at (0, 1): 2
Enter Value at (0, 2): 3
Enter Value at (1, 0): 4
Enter Value at (1, 1): 5
Enter Value at (1, 2): 6
Enter Value at (2, 0): 7
Enter Value at (2, 1): 8
Enter Value at (2, 2): 9
Original Matrix:
1
2
3
4
5
6
7
8
9
Transpose of the Matrix:
1
4
7
2
5
8
3
6
9
*/
