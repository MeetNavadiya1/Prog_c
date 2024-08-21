// check whether leap year or not

#include<stdio.h>
#include<conio.h>
void leap(int);
void main()
{
	int year;
	clrscr();
	printf("Enter year : ");
	scanf("%d",&year);
	leap(year);
	getch();
}
void leap(int year)
{
	if(year%100 == 0)
	{
		if(year%400 == 0)
		{
			printf("Leap Year");
		}
		else
		{
			printf("Not Leap Year");
		}
	}
	else
	{
		if(year%4 == 0)
		{
			printf("Leap Year");
		}
		else
		{
			printf("Not Leap Year");
		}
	}
}