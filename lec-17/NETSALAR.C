// find net salary after calculating income tax

#include<stdio.h>
#include<conio.h>
void netsalary(int,int,int);
void main()
{
	int id,level,bpay;
	clrscr();
	printf("Enter job number : ");
	scanf("%d",&id);
	printf("Enter level of emp : ");
	scanf("%d",&level);
	printf("Enter basic salary : ");
	scanf("%d",&bpay);
	netsalary(id,level,bpay);
	getch();
}
void netsalary(int id,int level,int bpay)
{
	float hra,gsal,nsal,tax;
	int perk=0;
	hra = bpay*0.10;
	if(bpay>=1000 && bpay<2000 && level==4)
	{
		perk = 250+0;
	}
	else if(bpay>=2000 && bpay<4000 && level==3)
	{
		perk = 500+100;
	}
	else if(bpay>=4000 && bpay<6000 && level==2)
	{
		perk = 750+200;
	}
	else if(bpay>=6000 && level==1)
	{
		perk = 1000+500;
	}
	else
	{
		printf("Level and basic pay is not matched");
	}
	gsal = bpay+hra+perk;
	if(gsal<=2000)
	{
		tax = 0;
	}
	else if(gsal>2000 && gsal<=4000)
	{
		tax = gsal*0.03;
	}
	else if(gsal>4000 && gsal<=5000)
	{
		tax = gsal*0.05;
	}
	else
	{
		tax = gsal*0.08;
	}
	nsal = gsal-tax;
	printf("\nJob Number : %d",id);
	printf("\nLevel : %d",level);
	printf("\nBasic pay : %d",bpay);
	printf("\nGross salary : %.2f",gsal);
	printf("\nIncome Tax : %.2f",tax);
	printf("\nNet salary : %.2f",nsal);
}