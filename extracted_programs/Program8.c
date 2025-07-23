/* Objective: Write a C program to convert a given integer (in seconds) to
hours, minutes, and seconds */

/* Theory: Four variables “sec” (user-input Seconds), ‘h’ (Hours), ‘m’
(Minutes), ‘s’ (Seconds) are taken. By using the formula Hours =
Seconds/3600, hours ‘h’ is calculated. Then for minutes ‘m’, first
hours*3600 (number of seconds used in calculating the number of hours)
is subtracted from number of seconds and hence divided by 60. Similarly,
Seconds ‘s’ is also calculated. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int sec = 0;
int h = 0;
int m = 0;
int s = 0;
system("cls");
printf("Enter Number of Seconds : ");
scanf("%d", &sec);
h = (sec / 3600);
m = ((sec - (h*3600))/60);
s = (sec - ((h*3600) + (m*60)));
printf("Hours : %d, Minutes : %d, Seconds : %d", h, m, s);
return 0;
}

/*
Sample Output:
Enter Number of Seconds : 48750
Hours : 13, Minutes : 32, Seconds : 30
*/
