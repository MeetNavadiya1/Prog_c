//find area of triangle
#include<stdio.h>
#include<conio.h>
void triangle(int,int);
void main()
{
	int l,b;
	clrscr();
	printf("Enter length : ");
	scanf("%d",&l);
	printf("Enter base : ");
	scanf("%d",&b);
	triangle(l,b);
	getch();
}
void triangle(int l,int b)
{
	float area;
	area = (l * b)/2;
	printf("Area of triangle is : %.2f",area);
}