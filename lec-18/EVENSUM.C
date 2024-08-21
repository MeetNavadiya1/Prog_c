// printf first N even number sum

#include<stdio.h>
#include<conio.h>
int sum(int);
void main()
{
	int n,ans;
	clrscr();
	printf("Enter n : ");
	scanf("%d",&n);
	ans = sum(n);
	printf("Sum is %d",ans);
	getch();
}
int sum(int n)
{
	int sum=0;
	for(int i=0;i<=n;i++)
	{
		if(i%2 == 0){
			sum += i;
		}
	}
	return sum;
}