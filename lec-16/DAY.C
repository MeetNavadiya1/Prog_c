//write a program that read 1 to 7 num and print correspondence day

#include<stdio.h>
#include<conio.h>
void daycheck(int);
void main()
{
	int day;
	clrscr();
	printf("Enter days between 1 to 7 : ");
	scanf("%d",&day);
	daycheck(day);
	getch();
}
void daycheck(int day)
{
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Enter valid number");
			break;
	}
}