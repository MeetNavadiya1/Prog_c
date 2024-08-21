//write a program to enter three subject marks and print marksheet

#include<stdio.h>
#include<conio.h>
void marksheet(int,int,int);
void main()
{
	int m1,m2,m3;
	clrscr();
	printf("Enter sub1 marks : ");
	scanf("%d",&m1);
	printf("Enter sub2 marls : ");
	scanf("%d",&m2);
	printf("Enter sub3 marks : ");
	scanf("%d",&m3);
	marksheet(m1,m2,m3);
	getch();
}
void marksheet(int m1,int m2,int m3)
{
	int tot;
	float per;
	tot = m1 + m2 + m3;
	per = tot / 3;
	printf("Subject 1 : %d",m1);
	printf("\nSubject 2 : %d",m2);
	printf("\nSubject 3 : %d",m3);
	printf("\nTotal :  %d",tot);
	printf("\nPercentage : %.2f",per);
}