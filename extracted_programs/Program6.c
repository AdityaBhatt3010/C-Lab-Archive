/* Objective: Write a C program to swap two variables using a third variable */

/* Theory: Three integers, ‘a’, ‘b’ and “temp” are taken. First the value of ‘a’
is stored in “temp”, then value of ‘b’ is stored in ‘a’ and lastly, value of
“temp” is stored in ‘b’. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int a = 0;
int b = 0;
int temp = 0;
system("cls");
printf("Enter a Number : ");
scanf("%d", &a);
printf("Enter a Number : ");
scanf("%d", &b);
printf("\n");
printf("Currently, a : %d, b : %d\n", a, b);
temp = a;
a = b;
b = temp;
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
