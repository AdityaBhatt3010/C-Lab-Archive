/* Objective: Write a program which will read a text and count all occurrences of
all characters which are part of text. */

/* Theory: “str” is used to the string. “toSearch” stores the character whose
frequency is to be checked. “i” is a loop variable and “count” is a counter
variable to count the occurrences of the character to be searched. */

#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main()
{
char str[MAX_SIZE];
char toSearch;
int i = 0;
int count = 0;
system("cls");
printf("Enter any string: ");
gets(str);
printf("Enter any character to search: ");
toSearch = getchar();
while(str[i] != '\0')
{
if(str[i] == toSearch)
{
count++;
}
i++;
}
printf("Total occurrence of '%c' = %d", toSearch, count);
return 0;
}

/*
Sample Output:
Enter any string: Aditya Bhatt
Enter any character to search: t
Total occurrence of 't' = 3
*/
