//check whether the two given numbers are equal

#include<stdio.h>
#include<conio.h>
void equal(int,int);
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	equal(n1,n2);
	getch();
}
void equal(int n1,int n2)
{
	if(n1 == n2)
	{
		printf("Given number is equal");
	}
	else
	{
		printf("Number in not equal");
	}
}