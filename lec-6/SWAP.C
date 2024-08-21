//swap two number with and without using third variable
#include<stdio.h>
#include<conio.h>
void swapwithout(int,int);
void swapwith(int,int);
void main()
{
	int a,b;
	clrscr();
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("\nBefore swap a is %d, b is %d",a,b);
	swapwith(a,b);
	swapwithout(a,b);
	getch();
}
void swapwith(int a,int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	printf("\n\nswap with third variable");
	printf("\nAfter swap a is %d,b is %d",a,b);
}
void swapwithout(int a,int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\n\nswap without third variable");
	printf("\nAfter swap a is %d,b is %d",a,b);
}