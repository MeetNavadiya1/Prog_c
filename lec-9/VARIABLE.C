//write a program to create variable using built in datatype and print value.

#include<stdio.h>
#include<conio.h>
void main()
{
	int i = 10;
	short s = 2;
	long int li = 342321;
	float f = 23.3433;
	char ch = 'a';
	double d = 342434.44234;
	clrscr();
	printf("integer : %d",i);
	printf("\nshort : %hd",s);
	printf("\nlong integer : %ld",li);
	printf("\nfloat : %f",f);
	printf("\nchar : %c",ch);
	printf("\ndouble : %lf",d);
	getch();
}