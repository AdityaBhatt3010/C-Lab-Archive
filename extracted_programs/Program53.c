/* Objective: Write a program to find product, sum, average, max and min
from a list of n numbers */

/* Theory: Six integers, ‘n’ (number of terms), ‘i’, “prod” (product), “sum”
(sum), “max” (maximum), “min” (minimum) along with an integer matrix
“a[]” and a float “avg” (average) are taken and using for loop, all the
required parameters are calculated and hence displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10];
int n = 0;
int i = 0;
int prod = 1;
int sum = 0;
float avg = 0;
int max = 0;
int min = 0;
system("cls");
printf("Enter Number: ");
scanf("%d", &n);
for (i = 0; i < n; i++)
{
printf("Enter Value Number %d: ", i);
scanf("%d", &a[i]);
}
max = a[0];
min = a[0];
for (i = 0; i < n; i++)
{
sum += a[i];
prod *= a[i];

if (a[i] > max)
max = a[i];
if (a[i] < min)
min = a[i];
}
avg = (float) sum / (float) n;
printf("\n");
printf("Product\t:\t%d\n", prod);
printf("Sum\t:\t%d\n", sum);
printf("Average\t:\t%.2f\n", avg);
printf("Maximum\t:\t%d\n", max);
printf("Minimum\t:\t%d\n", min);
return 0;
}

/*
Sample Output:
Enter Number: 3
Enter Value Number 0: 3
Enter Value Number 1: 2
Enter Value Number 2: 1
Product :
Sum
:
Average :
Maximum :
Minimum :

6
6
2.00
3
1
*/
