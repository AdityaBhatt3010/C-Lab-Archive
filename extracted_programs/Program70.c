/* Objective: Write a program in ‘C’ that compares two given dates. To store a
date, use a struct that contains three members namely day, month, and year. If
the dates are equal, then display message as “equal” otherwise “Unequal”. */

/* Theory: A structure “date” is created to store “day”, “month” and “year”. “d1”
and “d2” are the two different dates. */

#include<stdio.h>
#include<stdlib.h>
struct date
{
int day;
int month;
int year;
};
int main()
{
struct date d1,d2;
system("cls");
printf("Enter first date(dd/mm/yyyy): ");
scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
printf("Enter second date(dd/mm/yyyy): ");
scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
if((d1.day==d2.day)&&(d1.month==d2.month)&&(d1.year==d2.year))
{
printf("EQUAL");
}
else
{
printf("UNEQUAL");
}
return 0;
}

/*
Sample Output:
Enter first date(dd/mm/yyyy): 30 10 2022
Enter second date(dd/mm/yyyy): 23 12 2022
UNEQUAL
*/
