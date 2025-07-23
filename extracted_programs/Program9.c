/* Objective: Write a C program to convert specified days into years, weeks,
and days. */

/* Theory: Four variables “days” (user-input Days), ‘y’ (Years), ‘w’ (Weeks),
‘d’ (Days) are taken. By using the formula Years = Days/365, Hours ‘h’ is
calculated. Then for Weeks ‘w’, first days*365(number of days used in
calculating the number of Weeks) is subtracted from number of days and
hence divided by 7. Similarly, Days ‘d’ is also calculated. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int days = 0;
int y = 0;
int w = 0;
int d = 0;
system("cls");
printf("Enter Number of Days : ");
scanf("%d", &days);
y = (days / 365);
w = ((days - (y*365))/7);
d = (days - ((y*365) + (w*7)));
printf("Years : %d, Week : %d, Days : %d", y, w, d);
return 0;
}

/*
Sample Output:
Enter Number of Days : 1329
Years : 3, Week : 33, Days : 3
*/
