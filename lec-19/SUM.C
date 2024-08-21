// find sum of following series 12+22+32+42+....

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
	int ans=0,a=12,i;
	for(i=1;i<=n;i++)
	{
		ans += a;
		a += 10;
	}
	printf("Answer is %d",ans);
}