// find sum of even numbers upto n using while and do while loop

#include<stdio.h>
#include<conio.h>
void sum(int);
void main()
{
	int n;
	clrscr();
	printf("Enter n : ");
	scanf("%d",&n);
	sum(n);
	getch();
}
void sum(int n)
{
	int sum=0,sum1=0,i=0,j=0;
	while(i<=n)
	{
		if(i%2==0){
			sum += i;
		}
		i++;
	}
	printf("Sum from while loop : %d",sum);
	do
	{
		if(j%2==0){
			sum1 += j;
		}
		j++;
	}while(j<=n);
	printf("\nSum from do while loop : %d",sum1);
}