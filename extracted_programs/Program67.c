/* Objective: Write a C program to print all strong numbers between given
interval using functions. */

/* Theory: User defined functions “fact” and “printStrongNumbers” are used to
find factorial and print the strong numbers. “start” and “end” are the intervals
between which the strong numbers are to be printed. “sum” stores the sum of
digits. “num” is a copy variable which stores the value of start. */

#include<stdio.h>
#include<stdlib.h>
long long fact(int num);
void printStrongNumbers(int start, int end);
int main()
{
int start = 0;
int end = 0;
system("cls");
printf("Enter the lower limit to find strong number: ");
scanf("%d", &start);
printf("Enter the upper limit to find strong number: ");
scanf("%d", &end);
printf("All strong numbers between %d to %d are: \n", start, end);
printStrongNumbers(start, end);
return 0;
}
void printStrongNumbers(int start, int end)
{
long long sum;
int num = 0;
while(start != end)
{
sum = 0;

num = start;
while(num != 0)
{
sum += fact(num % 10);
num /= 10;
}
if(start == sum)
{
printf("%d ", start);
}
start++;
}
}
long long fact(int num)
{
if(num == 0)
{
return 1;
}
else
{
return (num * fact(num-1));
}
}

/*
Sample Output:
Enter the lower limit to find strong number: 1
Enter the upper limit to find strong number: 150
All strong numbers between 1 to 150 are:
1 2 145
*/
