#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,add,sub,mul,div,mod;
	clrscr();
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	add = n1 + n2;
	sub = n1 - n2;
	mul = n1 * n2;
	div = n1 / n2;
	mod = n1 % n2;
	printf("Addition is : %d\n",add);
	printf("Subtraction is : %d\n",sub);
	printf("Multiplication is : %d\n",mul);
	printf("Division is : %d\n",div);
	printf("Modulo is : %d",mod);
	getch();
}
