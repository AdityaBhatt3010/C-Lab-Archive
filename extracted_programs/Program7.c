/* Objective: Write a C program to swap two variables without using a third
variable */

/* Theory: Two integers ‘a’ and ‘b’ are taken. Then the value of ‘a’ is
substituted a + b, afterwards the value of ‘b’ is substituted a – b and
finally the value of ‘a’ is substituted a – b. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 0;
int b = 0;
system("cls");
printf("Enter a Number : ");
scanf("%d", &a);
printf("Enter a Number : ");
scanf("%d", &b);
printf("\n");
printf("Currently, a : %d, b : %d\n", a, b);
a = a + b;
b = a - b;
a = a - b;
printf("After swapping, a : %d, b : %d", a, b);
return 0;
}

/*
Sample Output:
Enter a Number : 1
Enter a Number : 2

Currently, a : 1, b : 2
After swapping, a : 2, b : 1
*/
