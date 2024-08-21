// print multiplication table

#include<stdio.h>
#include<conio.h>
void multi(int);
void main()
{
	int n;
	clrscr();
	printf("Enter number : ");
	scanf("%d",&n);
	multi(n);
	getch();
}
void multi(int n)
{
	for(int i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",n,i,n*i);
	}
}