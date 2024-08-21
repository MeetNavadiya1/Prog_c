// print first N numbers

#include<stdio.h>
#include<conio.h>
void printN(int);
void main()
{
	int n;
	clrscr();
	printf("Enter N : ");
	scanf("%d",&n);
	printN(n);
	getch();
}
void printN(int n)
{
	for(int i=1;i<=n;i++)
	{
		printf("\n%d",i);
	}
}