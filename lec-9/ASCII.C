//write a program to print ascii value of a character

#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter character : ");
	scanf("%c",&ch);
	printf("Ascii value of %c is %d",ch,ch);
	getch();
}