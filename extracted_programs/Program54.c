/* Objective: Write a program in C to display the index of smallest and
largest element in 10 integers */

/* Theory: Three integers, ‘i’, “max” (maximum) and “min” (minimum) are
taken along with an integer array “a[10]”. By using the for loop, each
value is compared and hence the “max” and “min” are computed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10];
int i = 0;
int max = 0;
int min = 0;
system("cls");
for (i = 0; i < 10; i++)
{
printf("Enter Value Number %d: ", i);
scanf("%d", &a[i]);
}
max = a[0];
min = a[0];
for (i = 0; i < 10; i++)
{
if (a[i] > max)
max = a[i];
if (a[i] < min)
min = a[i];
}
printf("\n");
printf("Maximum\t:\t%d\n", max);
printf("Minimum\t:\t%d\n", min);

return 0;
}

/*
Sample Output:
Enter Value Number 0: 5
Enter Value Number 1: 46
Enter Value Number 2: 21
Enter Value Number 3: 73
Enter Value Number 4: 9
Enter Value Number 5: 45
Enter Value Number 6: 1374
Enter Value Number 7: 12
Enter Value Number 8: 34
Enter Value Number 9: 54
Maximum :
Minimum :

1374
5
*/
