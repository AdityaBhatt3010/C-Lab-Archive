/* Objective: Write a program which reads your name from the keyboard and
outputs a list of ASCII codes, */

/* Theory: “input_str” is used to store the name given by user. “i” is a loop
variable. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char input_str[1000];
system("cls");
printf("Enter Your Name: ");
gets(input_str);
printf("The ASCII values of the string are:\n");
for(int i=0;input_str[i]!='\0';i++)
{
printf("%d ",(int)(input_str[i]));
}
return 0;
}

/*
Sample Output:
Enter Your Name: Aditya Bhatt
The ASCII values of the string are:
65 100 105 116 121 97 32 66 104 97 116 116
*/
