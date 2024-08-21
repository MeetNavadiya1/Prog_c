// convert paisa into rupee
#include<stdio.h>
#include<conio.h>
void rupee(int);
void main()
{
	int paisa;
	clrscr();
	printf("Enter paisa : ");
	scanf("%d",&paisa);
	rupee(paisa);
	getch();
}
void rupee(int paisa)
{
	int rupee,pa;
	rupee = paisa/100;
	pa = paisa%100;
	printf("%d rupee and %d paisa",rupee,pa);
}