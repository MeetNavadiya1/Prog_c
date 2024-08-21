// write a program for calulator with basic operation

#include<stdio.h>
#include<conio.h>
int calc(int,int,char);
int main()
{
	int n1,n2;
	char op;
	float ans;
	clrscr();
	printf("Enter 1st number : ");
	scanf("%d",&n1);
	printf("Enter 2nd number : ");
	scanf("%d",&n2);
	printf("Enter operator : ");
	scanf("%*c");
	scanf("%c",&op);
	ans = calc(n1,n2,op);
	if(ans == 0){
		printf("\nEnter valid operator");
	}else{
		printf("\nAnswer is : %.2f",ans);
	}
}
int calc(int n1,int n2,char op)
{
	float ans;
	switch(op)
	{
		case '+':
			ans = n1+n2;
			break;
		case '-':
			ans = n1-n2;
			break;
		case '*':
			ans = n1*n2;
			break;
		case '/':
			ans = n1/n2;
			break;
		case '%':
			ans = n1%n2;
			break;
		default:
			ans = 0;
			break;
	}
	return ans;
}