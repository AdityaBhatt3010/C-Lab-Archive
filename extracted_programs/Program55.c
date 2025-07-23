/* Objective: Write a program in C to display the index of smallest and
largest element in 3 X 4 matrix of integers. */

/* Theory: Four integers ‘i’, ‘j’, “max” (maximum), “min” (minimum) along
with an integer array “a[3][4]”. Using for loop, each value is compared
and hence the “max” and “min” are calculated. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[3][4];
int i = 0;
int j = 0;
int max = 0;
int min = 0;
system("cls");
for (i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
printf("Enter Value at (%d, %d): ", i, j);
scanf("%d", &a[i][j]);
}
}
max = a[0][0];
min = a[0][0];
for (i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
if (a[i][j] > max)
max = a[i][j];
if (a[i][j] < min)
min = a[i][j];

}
}
printf("\nIn the Matrix\n");
for (i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("\n");
printf("Maximum Value in the Matrix\t:\t%d\n", max);
printf("Minimum Value in the Matrix\t:\t%d\n", min);
return 0;
}

/*
Sample Output:
Enter Value at (0, 0): 64
Enter Value at (0, 1): 25
Enter Value at (0, 2): 15
Enter Value at (0, 3): 34
Enter Value at (1, 0): 92
Enter Value at (1, 1): 27
Enter Value at (1, 2): 5
Enter Value at (1, 3): 64
Enter Value at (2, 0): 164
Enter Value at (2, 1): 25
Enter Value at (2, 2): 28
Enter Value at (2, 3): 37
In the Matrix
64  25  92  27
164 25  15  5
28  34  64  37

Maximum Value in the Matrix: 164
Minimum Value in the Matrix: 5
*/
