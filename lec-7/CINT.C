// write program to calculate compound interest
#include<stdio.h>
#include<conio.h>
#include<math.h>
void cint(int,int,int);
void main()
{
	int p,r,n;
	clrscr();
	printf("Enter principle : ");
	scanf("%d",&p);
	printf("ENter rate of interest : ");
	scanf("%d",&r);
	printf("Enter number of year : ");
	scanf("%d",&n);
	cint(p,r,n);
	getch();
}
void cint(int p,int r,int n)
{
	float ci;
	ci = p * pow((1+(r/100)),n);
	printf("compound interest is : %.2f",ci);
}
