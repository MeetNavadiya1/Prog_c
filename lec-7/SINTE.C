//write a program to calculate simple interest
#include<stdio.h>
#include<conio.h>
void calcSinterest(int,int,int);
void main()
{
	int p,t,r;
	clrscr();
	printf("Enter principal : ");
	scanf("%d",&p);
	printf("Enter time : ");
	scanf("%d",&t);
	printf("Enter rate of interest : ");
	scanf("%d",&r);
	calcSinterest(p,t,r);
	getch();
}
void calcSinterest(int p,int t,int r)
{
	float si;
	si = (p*t*r)/100;
	printf("Simple interest is : %.2f",si);
}