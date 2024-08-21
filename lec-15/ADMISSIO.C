// write a grogram to check eligibility for student admission

#include<stdio.h>
#include<conio.h>
void admission(int,int,int);
void main()
{
	int math,ph,che;
	clrscr();
	printf("Enter math marks : ");
	scanf("%d",&math);
	printf("Enter physics marks : ");
	scanf("%d",&ph);
	printf("Enter chemistry marks : ");
	scanf("%d",&che);
	admission(math,ph,che);
	getch();
}
void admission(int math,int ph,int che)
{
	if(math>=50 && ph>=45 && che>=60)
	{
		if(math+ph+che >= 170)
		{
			printf("\nStudent is Eligible for Admission");
		}
		else if(math+ph >=120)
		{
			printf("\nStudent is Eligible for Admission");
		}
		else
		{
			printf("\nStudent is Not Eligible for Admission");
		}
	}
	else
	{
		printf("\nStudent is Not Eligible for Admission");
	}
}
