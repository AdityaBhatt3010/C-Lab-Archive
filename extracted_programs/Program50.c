/* Objective: Write a program in C to print the following pattern:
1
0

1

1

0

1

0

1

0

1

1

0

1

0

1 */

/* Theory: Four integers “r” (row) and “c” (column), “n” (number 0 or 1) and
“k” have been taken and using the nested for loop, the required pattern is
printed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int r = 0;
int c = 0;
int n = 0;
int k = 0;
system("cls");
for (r = 1; r <= 5; r++)
{
k = 0;
for (c = 1; c <= 5; c++)
{
if (r >= c)
{
if (n == 0)
{
n = 1;
}
else if (n == 1)
{

n = 0;
}
if ((k == 0) && (r % 2))
{
n = 1;
}
printf("%d\t", n);
k++;
}
}
printf("\n");
}
return 0;
}

/*
Sample Output:
1
0
1
0
1

1
0
1
0

1
0
1

1
0

1
*/
