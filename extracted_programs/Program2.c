/* Objective: Write a C program to add three numbers */

/* Theory: Three Integers ‘a’, ‘b’ and ‘c’ are taken with user-input values.
Then their sum is stored in a fourth variable ‘d’ which is then printed. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;
printf("Enter a Number : ");
scanf("%d", &a);
printf("Enter a Number : ");
scanf("%d", &b);
printf("Enter a Number : ");
scanf("%d", &c);
printf("\n");
d = a + b + c;
printf("Sum is : %d", d);
return 0;
}

/*
Sample Output:
Enter a Number : 15
Enter a Number : 21
Enter a Number : 64
Sum is : 100
*/
