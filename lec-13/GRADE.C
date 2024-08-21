// enter marks and give equivalent grade

#include<stdio.h>
#include<conio.h>
void grade(int,char nm[],int,int,int);
void main()
{
	int id,m1,m2,m3;
	char name[20];
	clrscr();
	printf("Enter student id : ");
	scanf("%d",&id);
	printf("Enter student name : ");
	scanf("%s",&name);
	printf("Enter marks 1 : ");
	scanf("%d",&m1);
	printf("Enter marks 2 : ");
	scanf("%d",&m2);
	printf("Enter marks 3 : ");
	scanf("%d",&m3);
	grade(id,name,m1,m2,m3);
	getch();
}
void grade(int id,char nm[],int m1,int m2,int m3)
{
	int tot;
	float per;
	tot = m1+m2+m3;
	per = tot/3;
	printf("\nStudent id : %d",id);
	printf("\nStudent name : %s",nm);
	printf("\nTotal marks is : %d",tot);
	printf("\nPercentage is : %.2f",per);
	if(per>=80 && per<=100)
	{
		printf("\nDistinction");
	}
	else if(per>=60 && per<=79)
	{
		printf("\nFirst Class");
	}
	else if(per>=35 && per<=59)
	{
		printf("\nSecond Class");
	}
	else
	{
		printf("\nFail");
	}
}