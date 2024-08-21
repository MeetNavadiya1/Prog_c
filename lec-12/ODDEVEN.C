// check whether number is odd or even

#include<stdio.h>
#include<conio.h>
void oddeven(int);
void main()
{
	int num;
	clrscr();
	printf("Enter number : ");
	scanf("%d",&num);
	oddeven(num);
	getch();
}
void oddeven(int num)
{
	if(num%2 == 0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
