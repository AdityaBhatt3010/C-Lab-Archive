/* Objective: WAP to accept a coordinate point in a XY coordinate system
and determine in which quadrant the coordinate point lies. */

/* Theory: If X-Coordinate and Y-Coordinate both are positive, then First
quadrant, if X is negative and Y is positive, then second quadrant, if X and
Y both are negative, then third quadrant, otherwise fourth quadrant. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int x = 0;
int y = 0;
system("cls");
printf("Enter X-Coordinate : ");
scanf("%d", &x);
printf("Enter Y-Coordinate : ");
scanf("%d", &y);
if (x > 0 && y > 0)
{
printf("First Quadrant");
}
else if (x < 0 && y > 0)
{
printf("Second Quadrant");
}
else if (x < 0 && y < 0)
{
printf("Third Quadrant");
}
else
{
printf("Fourth Quadrant");
}

return 0;
}

/*
Sample Output:
Enter X-Coordinate : -6
Enter Y-Coordinate : 4
Second Quadrant
*/
