//write a program to calculate gross salary

#include<stdio.h>
#include<conio.h>
void grossSalary(int);
void main()
{
	int basic;
	clrscr();
	printf("Enter basic salary : ");
	scanf("%d",&basic);
	grossSalary(basic);
	getch();
}
void grossSalary(int basic)
{
	float da,hra,con,medi,oth,gsal;
	da = basic * 0.10;
	hra = basic * 0.08;
	con = basic * 0.05;
	medi = basic * 0.10;
	oth = basic * 0.05;
	gsal = basic+da+hra+con+medi+oth;
	printf("Gross salary is : %.2f",gsal);
}
