/* Objective: A library charges a fine for every book returned late. For first 5
days the fine is 50 paisa, for 6-10 days, fine is one rupee and above 10
days, fine is 5 rupees. If you return the book after 30 days your
membership will be cancelled. Write a program to accept the number of
days the member is late to return the book and display the fine or
appropriate message. */

/* Theory: Two integers ‘i’ and ‘n’ (No. of Days Late) are taken along with
float variable “fine” (amount of fine) are taken. If number of days is less
than 5, 0.5 rs. Per day is charged, if numbers of days is between 5 and 10,
then (0.5*5) along with 1 rs. per day after day 5. Similarly 5 rs. after day
10 and membership is cancelled after day 30. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int n = 0;
int i = 0;
float fine = 0;
system("cls");
printf("Enter Number of Days of Late Submission: ");
scanf("%d", &n);
if (n < 5)
{
fine = 0.5 * n;
printf("Your Fine Amount is %.2f Rs.", fine);
}
else if (n < 10)
{
fine = (0.5 * n) + (1 * (n - 5));
printf("Your Fine Amount is %.2f Rs.", fine);
}
else if (n < 30)

{
fine = (0.5 * n) + (1 * 10) + (5 * (n - 10));
printf("Your Fine Amount is %.2f Rs.", fine);
}
else
{
printf("Your Membership is Cancelled");
}

return 0;
}

/*
Sample Output:
Enter Number of Days of Late Submission: 26
Your Fine Amount is 103.00 Rs.
*/
