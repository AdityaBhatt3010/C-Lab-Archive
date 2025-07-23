/* Objective: Write a program which reads a string from the keyboard and
determines whether the string is a palindrome (Ignore Capitalization) */

/* Theory: “s[1000]” is used to store the string to be checked. “i” is the loop
variable. “c” is used as a counter variable. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char s[1000];
int i = 0;
int n = 0;
int c = 0;
system("cls");
printf("Enter the String: ");
scanf("%s",s);
n = strlen(s);
for(i=0;i<n/2;i++)
{
if(s[i]==s[n-i-1])
c++;
}
if(c==i)
printf("String is Palindrome");
else
printf("String is not Palindrome");
return 0;
}

/*
Sample Output:
Enter the String: nitin
String is Palindrome
*/
