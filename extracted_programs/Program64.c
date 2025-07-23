/* Objective: Write a C program to check whether a number is even or odd using
functions. */

/* Theory: “isEven” is a user defined function, the number stored in “num” is
checked for even or odd and displayed. */

#include <stdio.h>
#include<stdlib.h>
int isEven(int);
int main()
{
int n = 0;
system("cls");
printf("Enter any number: ");
scanf("%d", &n);
isEven(n);
return 0;
}
int isEven(int num)
{
if(num % 2 == 0)
{
printf("The number is Even\n");
}
else
{
printf("The number is Odd\n");
}
}

/*
Sample Output:
Enter any number: 5
The number is Odd
*/
