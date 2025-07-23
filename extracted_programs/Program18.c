/* Objective: Write a program in C to implement Simple Calculator. */

/* Theory: Three variables, two float user-defined ‘a’ and ‘b’ along with an
integer “choice” are taken. “choice” is used for controlling which
operation is to be performed on ‘a’ and ‘b’. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float a = 0;
float b = 0;
int choice = 0;
system("cls");
printf("Enter Number : ");
scanf("%f", &a);
printf("Enter Number : ");
scanf("%f", &b);
printf("Enter Choice (Integer Only) :\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
scanf("%d", &choice);
if (choice == 1)
{
printf("%f + %f = %f", a, b, a+b);
}
else if (choice == 2)
{
printf("%f - %f = %f", a, b, a-b);
}
else if (choice == 3)
{
printf("%f + %f = %f", a, b, a*b);
}

else if (choice == 4)
{
printf("%f + %f = %f", a, b, a/b);
}
else
{
printf("Please Recheck the Choices.");
}
return 0;
}

/*
Sample Output:
Enter Number : 5
Enter Number : 6
Enter Choice (Integer Only) :
1. Addition
2. Subtraction
3. Multiplication
4. Division
1
5.000000 + 6.000000 = 11.000000
*/
