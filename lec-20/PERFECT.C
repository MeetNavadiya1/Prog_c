// ckeck whether number is perfect or not

#include<stdio.h>
#include<conio.h>
void perfect(int);
void main()
{
	int n;
	clrscr();
	printf("Enter a numbre : ");
	scanf("%d",&n);
	perfect(n);
	getch();
}
void perfect(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i == 0)
		{
			sum += i;
		}
	}
	if(n == sum){
		printf("A number is perfect");
	}else{
		printf("A number is not perfect");
	}
}