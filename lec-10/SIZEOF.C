// write a proggram to finde size of int,float,double and char

#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	float f=10.01;
	double d=23.32;
	char ch='a';
	clrscr();
	printf("Integer : %d",sizeof(a));
	printf("\nfloat : %d",sizeof(f));
	printf("\ndouble : %d",sizeof(d));
	printf("\nchar : %d",sizeof(ch));
	getch();
}