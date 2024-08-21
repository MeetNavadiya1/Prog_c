// write a program to find fectorial

#include<stdio.h>
#include<conio.h>
int fectorial(int);
void main()
{
	int n,ans;
	clrscr();
	printf("Enter n : ");
	scanf("%d",&n);
	ans = fectorial(n);
	printf("Fectorial is : %d",ans);
	getch();
}
int fectorial(int n)
{
	int fec=1;
	for(int i=n;i>=1;i--)
	{
		fec *= i;
	}
	return fec;
}