//convert days into month and day
#include<stdio.h>
#include<conio.h>
void month(int);
void main()
{
	int days;
	clrscr();
	printf("Enter days : ");
	scanf("%d",&days);
	month(days);
	getch();
}
void month(int days)
{
	int month,day;
	month = days / 30;
	day = days % 30;
	printf("%d month and %d day",month,day);
}
