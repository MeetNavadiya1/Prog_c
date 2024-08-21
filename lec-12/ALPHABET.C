// check whether a character ia an alphabet or not not using ascii

#include<stdio.h>
#include<conio.h>
void alphabet(char);
void main()
{
	char ch;
	clrscr();
	printf("Enter character : ");
	scanf("%c",&ch);
	alphabet(ch);
	getch();
}
void alphabet(char ch)
{
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("not alphabet");
	}
}