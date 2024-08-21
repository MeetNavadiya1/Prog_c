// create a program to simple calculator using else..if

#include<stdio.h>
#include<conio.h>
int calc(int,int,char);
void main()
{
	int n1,n2,ans;
	char ch;
	clrscr();
	printf("Enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	printf("Enter operator : ");
	scanf("%*c");
	scanf("%c",&ch);
	ans = calc(n1,n2,ch);
	printf("\nAnswer is : %d",ans);
	getch();
}
int calc(int n1,int n2,char ch)
{
	if(ch == '+')
	{
		return n1+n2;
	}
	else if(ch == '-')
	{
		return n1-n2;
	}
	else if(ch == '*')
	{
		return n1*n2;
	}
	else if(ch == '/')
	{
		return n1/n2;
	}
	else if(ch == '%')
	{
		return n1%n2;
	}
	else
	{
		return 0;
	}
}