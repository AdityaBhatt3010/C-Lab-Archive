/* Objective: Write a program which will read a text and count all occurrences of
a particular word. */

/* Theory: “s[1000]” and “w[1000]” are arrays to store words. “i” and “j” are loop
variables. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char s[1000],w[1000], a[1000];
int n = 0;
int i = 0;
int j = 0;
int k = 0;
int l = 0;
int found = 0;
int t = 0;
system("cls");
printf("Enter the string: ");
gets(s);
printf("Enter word to be searched: ");
gets(w);
for(i = 0; s[i]; i++)
{
if(s[i] == ' ')
{
a[k++]=i;
}
}
a[k++]=i;
for(i=0;i<k;i++)
{
n=a[i]-j;
if(n==strlen(w))

{
t=0;
for(l=0;w[l];l++)
{
if(s[l+j]==w[l])
{
t++;
}
}
if(t==strlen(w))
{
found++;
}
}
j=a[i]+1;
}
printf("word '%s' is occurred count=%d ",w,found);
}

/*
Sample Output:
Enter the string: string is a string string
Enter word to be searched: string
word 'string' is occurred count=3
*/
