/* Objective: Write a C program to check whether a given year is Leap year
or not */

/* Theory: If Year if divisible by 4, it is a leap year. Otherwise not. */

# include <stdio.h>
# include <stdlib.h>
int main()
{
int a = 0;
system("cls");
printf("Enter Year to be Checked : ");
scanf("%i", &a);
if (a % 4 ==0)
{
printf("%d is a Leap Year\n", a);
}
else
{
printf("%d is not a Leap Year\n", a);
}
return 0;
}

/*
Sample Output:
Enter Year to be Checked : 2024
2024 is a Leap Year
*/
