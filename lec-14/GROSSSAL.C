// calculate gross salary

#include<stdio.h>
#include<conio.h>
void gross(int,char nm[],int);
void main()
{
	int id,bsal;
	char name[20];
	clrscr();
	printf("Enter emp id : ");
	scanf("%d",&id);
	printf("Enter emp name : ");
	scanf("%s",&name);
	printf("Enter basic salary : ");
	scanf("%d",&bsal);
	gross(id,name,bsal);
	getch();
}
void gross(int id,char nm[],int bsal)
{
	float da,hra,pf,gr;
	if(bsal < 5000){
		da = bsal*0.30;
	}
	else{
		da = bsal*0.45;
	}
	hra = bsal*0.15;
	pf = bsal*0.12;
	gr = bsal+da+hra-pf;
	printf("\nEmp Id : %d",id);
	printf("\nEmp name : %s",nm);
	printf("\nBasic salary : %d",bsal);
	printf("\nGross salary : %.2f",gr);
}