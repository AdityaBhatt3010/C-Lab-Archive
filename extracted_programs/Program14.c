/* Objective: Write a C program to covert temperature from Fahrenheit to
Celsius and Celsius to Fahrenheit (User must provide the choice of type of
temperature) */

/* Theory: Three variable, one integer “choice” to maintain user choice is
used and rest two variables ‘c’ (Celsius) and ‘f’ (Fahrenheit) are used for
calculating using the formulas. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
float c = 0;
float f = 0;
int choice = 0;
system("cls");
printf("Do You want to convert :\n");
printf("1. Celsius to Fahrenheit\n");
printf("2. Fahrenheit to Celsius\n");
printf("Enter Choice (Integer Only) :\n");
scanf("%d", &choice);
if (choice == 1)
{
printf("Enter Temperature in Celsius : ");
scanf("%f", &c);
f = (c*1.8 + 32);
printf("Temperature in Fahrenheit is : %f\n", f);
}
else if (choice == 2)
{
printf("Enter Temperature in Fahrenheit : ");
scanf("%f", &f);
f = ((f-32)*1.8);
printf("Temperature in Celsius is : %f\n", c);
}
else
{

printf("Please ReCheck the Options.");
}
return 0;
}

/*
Sample Output:
Do You want to convert :
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
Enter Choice (Integer Only) : 1
Enter Temperature in Celsius : 100
Temperature in Fahrenheit is : 212.000000
*/
