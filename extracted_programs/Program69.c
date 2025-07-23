/* Objective: Declare a structure name student containing members name,
roll_no, marks. Create an array of 30 such students. Write a program to read
and display the contents of array. */

/* Theory: A structure “student” is created to store name , roll, marks in
“firstName”, “roll” and “marks” respectively. “s[30]” is a array of size 30. “i” is
a loop variable. */

#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
struct student
{
char firstName[50];
int roll;
float marks;
} s[30];
int main()
{
int i = 0;
system("cls");
// Storing Information
printf("Enter information of students:\n");
for (i = 0; i < 30; ++i)
{
s[i].roll = i + 1;
printf("\nFor Roll Number %d - \n", s[i].roll);
printf("Enter first name: ");
gets(s[i].firstName);
printf("Enter marks: ");
scanf("%f", &s[i].marks);
fflush(stdin);
}
// Displaying Information
printf("\n\nDisplaying Information:\n\n");

for (i = 0; i < 30; ++i)
{
printf("\nRoll number: %d\n", i + 1);
printf("First name: ");
puts(s[i].firstName);
printf("Marks: %.1f", s[i].marks);
printf("\n");
}
return 0;
}

/*
Sample Output:
Sorry; I had too much PII on Me lol ;-/
*/
