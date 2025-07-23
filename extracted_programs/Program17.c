/* Objective: Write a C program to find largest of three numbers */

/* Theory: Four float variables are taken wherein ‘a’, ‘b’, ‘c’ are user-defined
numbers and “max” is the maximum of the numbers which is hence
displayed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float a = 0;
float b = 0;
float c = 0;
float max = 0;
system("cls");
printf("Enter Number : ");
scanf("%f", &a);
printf("Enter Number : ");
scanf("%f", &b);
printf("Enter Number : ");
scanf("%f", &c);
printf("\n");
if (a > b)
{
if (a > c)
{
max = a;
}
else
{
max = c;
}
}
else if (b > c)
{
max = b;
}

else
{
max = c;
}
printf("Maximum Number : %f", max);
return 0;
}

/*
Sample Output:
Enter Number : 1
Enter Number : 2
Enter Number : 3
Maximum Number : 3.000000
*/
