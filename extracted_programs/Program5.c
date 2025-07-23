/* Objective: Write a C program to print a block F using hash (#), where the F
has a height of six characters and width of five and four characters */

/* Theory: One variable ‘i’ is taken for maintaining the for loop wherein five
hashes are printed if ‘i’ is 0 or 2 while only one hash otherwise till 6 times. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int i = 0;
system("cls");
for (i = 0; i < 6; i++)
{
if ((i == 0) || (i == 2))
{
printf("#####");
}
else
{
printf("#");
}
printf("\n");
}
return 0;
}

/*
Sample Output:
#####
#
#####
#
#
#
*/
