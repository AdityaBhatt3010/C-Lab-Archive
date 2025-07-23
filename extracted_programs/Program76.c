/* Objective: Write a program to copy the contents of one file to another file. */

/* Theory: Program to copy contents of one file to another. */

#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fptr1, *fptr2;
char filename[100], c;
system("cls");
printf("Enter the filename to open for reading: ");
gets(filename);
fptr1 = fopen(filename, "r");
if (fptr1 == NULL)
{
printf("Cannot open file %s \n", filename);
exit(0);
}
printf("Enter the filename to open for writing: ");
gets(filename);
fptr2 = fopen(filename, "w");
if (fptr2 == NULL)
{
printf("Cannot open file %s \n", filename);
exit(0);
}
c = fgetc(fptr1);
while (c != EOF)
{
fputc(c, fptr2);
c = fgetc(fptr1);
}

printf("\nContents copied to ");
puts(filename);
fclose(fptr1);
fclose(fptr2);
return 0;
}

/*
Sample Output:
Enter the filename to open for reading: Try.txt
Enter the filename to open for writing: Try_1.txt
Contents copied to Try_1.txt
*/
