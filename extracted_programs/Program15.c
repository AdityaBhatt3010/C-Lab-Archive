/* Objective: Write a C program a program to check whether an alphabet is
a vowel or consonant */

/* Theory: If the user-defined character is among a, e, i, o, u , then the given
character is a vowel, otherwise a consonant. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
char a;
system("cls");
printf("Enter Character : ");
scanf("%c", &a);
if ((a =='a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u'))
{
printf("%c is a vowel", a);
}
else
{
printf("%c is a consonent", a);
}
return 0;
}

/*
Sample Output:
Enter Character : i
i is a vowel
*/
