// enter number while sum is exceed 50

#include<stdio.h>
#include<conio.h>
void sum();
int main()
{
	printf("Enter number until sum exceed 50\n");
	sum();
	getch();
}
void sum()
{
	int num,sum=0;
	do
	{
		scanf("%d",&num);
		sum+=num;
	}while(sum<=50);
	printf("Sum is exeed 50");
}