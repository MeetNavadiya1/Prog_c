// simple program to demonstrate operator

#include<stdio.h>
#include<conio.h>
void ope(int,int);
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter 1st number : ");
	scanf("%d",&n1);
	printf("Enter 2nd number : ");
	scanf("%d",&n2);
	ope(n1,n2);
	getch();
}
void ope(int n1,int n2)
{
	int add,sub,mul,div,mod;
	add = n1+n2;
	sub = n1-n2;
	mul = n1*n2;
	div = n1/n2;
	mod = n1%n2;
	printf("Addition : %d",add);
	printf("\nSubtration : %d",sub);
	printf("\nMultiplication : %d",mul);
	printf("\nDivision : %d",div);
	printf("\nModulo : %d",mod);
}