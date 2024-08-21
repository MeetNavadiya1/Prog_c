// find sum of following series 1+1/4+1/9+1/16+...

#include<stdio.h>
#include<conio.h>
void sum(int);
int main()
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
	double sum=0.0;
	int i;
	for(i=1; i<=n; i++)
	{
		sum += 1.0 / (i * i);
	}
	printf("Answer is %lf",sum);
}
