#include<stdio.h>
#include<conio.h>
void arithmatic();
void main()
{
	clrscr();
	arithmatic();
	getch();
}

void arithmatic()
{
	int no1,no2,add,sub,mul,div,mod;
	printf("Enter number 1 : ");
	scanf("%d",&no1);
	printf("Enter number 2 : ");
	scanf("%d",&no2);
	add = no1+no2;
	sub = no1-no2;
	mul = no1*no2;
	div = no1/no2;
	mod = no1%no2;
	printf("Addition is : %d\n",add);
	printf("Subtraction is : %d\n",sub);
	printf("Multiplication is : %d\n",mul);
	printf("Division is : %d\n",div);
	printf("Modulo is : %d",mod);
}