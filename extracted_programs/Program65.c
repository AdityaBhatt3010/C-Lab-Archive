/* Objective: Write a C program to check whether a number is Prime, Armstrong
or perfect number using functions. */

/* Theory: User defined functions “isPrime”, “isArmstrong” and “isPerfect” are
used to check a variable “num” if it’s a prime, Armstrong or perfect number. */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);
int main()
{
int num = 0;
system("cls");
printf("Enter any number: ");
scanf("%d", &num);
if(isPrime(num))
{
printf("%d is Prime number.\n", num);
}
else
{
printf("%d is not Prime number.\n", num);
}
if(isArmstrong(num))
{
printf("%d is Armstrong number.\n", num);
}
else
{
printf("%d is not Armstrong number.\n", num);
}
if(isPerfect(num))
{

printf("%d is Perfect number.\n", num);
}
else
{
printf("%d is not Perfect number.\n", num);
}
return 0;
}
int isPrime(int num)
{
int i = 0;
for(i = 2; i <= (num/2) ; i++)
{
if(num%i == 0)
{
return 0;
}
}
return 1;
}
int isArmstrong(int num)
{
int lastDigit = 0;
int sum = 0;
int originalNum = 0;
int digits = 0;
originalNum = num;
digits = (int) log10(num) + 1;
while(num > 0)
{
lastDigit = num % 10;
sum = sum + round(pow(lastDigit, digits));
num = num / 10;
}
return (originalNum == sum);
}
int isPerfect(int num)
{
int i = 0;
int sum = 0;
int n = 0;
sum = 0;

n = num;
for(i = 1; i < n; i++)
{
if(n%i == 0)
{
sum += i;
}
}
return (num == sum);
}

/*
Sample Output:
Enter any number: 153
153 is not Prime number.
153 is Armstrong number.
153 is not Perfect number.
*/
