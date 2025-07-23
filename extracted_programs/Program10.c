/* Objective: Write a C program to check whether a number is even or odd. */

/* Theory: If remainder of number divided by 2 is 0, then Even is printed,
else odd. */

# include <stdio.h>
# include <stdlib.h>
int main()
{
int a = 0;
system("cls");
printf("Enter Number to be Checked : ");
scanf("%i", &a);
if (a % 2 ==0)
{
printf("%d is Even\n", a);
}
else
{
printf("%d is Odd\n", a);
}
return 0;
}

/*
Sample Output:
Enter Number to be Checked : 3
3 is Odd
*/
