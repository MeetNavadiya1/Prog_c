// find sum of following series 1+2+3+..+n

#include<stdio.h>
#include<conio.h>
void sum(int);
void main()
{
	int n;
	clrscr();
	printf("Enter n : ");
	scanf("%d",&n);
	sum(n);
	getch();
}
void sum(int n)
{
	int ans=0,i;
	for(i=0;i<=n;i++)
	{
		ans += i;
	}
	printf("Answer is : %d",ans);
}