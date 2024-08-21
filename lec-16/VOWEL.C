// check wether alphabet is vowel or consonant

#include<stdio.h>
#include<conio.h>
void alphabet(char);
void main()
{
	char ch;
	clrscr();
	printf("Enter alphabet : ");
	scanf("%c",&ch);
	alphabet(ch);
	getch();
}
void alphabet(char ch)
{
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("VOWEL");
			break;
		case 'e':
		case 'E':
			printf("VOWEL");
			break;
		case 'i':
		case 'I':
			printf("VOWEL");
			break;
		case 'o':
		case 'O':
			printf("VOWEL");
			break;
		case 'u':
		case 'U':
			printf("VOWEL");
			break;
		default :
			printf("CONSONANT");
			break;
	}
}
