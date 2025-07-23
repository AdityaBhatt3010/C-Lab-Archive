/* Objective: Write a program in C to calculate and print the Electricity bill of a given
customer. The customer id and unit consumed by the user should be
taken from the keyboard and display the total amount to pay to the
customer.
upto 199------------1.20
200-500-------------1.80
Above 500----------2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the
minimum bill should be of Rs. 100/ */

/* Theory: Three variables, integer “id” (Customer id), float “unit” (Unit) and
float “amt” (Amount) are taken. Amount is hence calculated after
applying the given conditions. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
int id = 0;
float unit = 0;
float amt = 0;
system("cls");
printf("Enter Customer id : ");
scanf("%d", &id);
printf("Enter Number of Units consumed : ");
scanf("%f", &unit);
if (unit <= 199)
{
amt = unit * 1.20;

}
else if (unit <= 500)
{
amt = unit * 1.80;
}
else
{
amt = unit * 2.00;
}
if (amt > 400)
{
amt += (0.15*amt);
}
else if (amt < 100)
{
amt = 100;
}
printf("Total Bill of Customer id %d who used %f units is %f", id, unit,
amt);
return 0;
}

/*
Sample Output:
Enter Customer id : 132001
Enter Number of Units consumed : 356
Total Bill of Customer id 132001 who used 356.000000 units is 736.919983
*/
