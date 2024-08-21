//find area and circumference of circle
#include<stdio.h>
#include<stdio.h>
#define PI 3.14
void circumference(int);
void area(int);
void main()
{
	int r;
	clrscr();
	printf("Enter radius : ");
	scanf("%d",&r);
	circumference(r);
	area(r);
	getch();
}
void circumference(int r)
{
	printf("Circumference of circle if : %.2f",2*PI*r);
}
void area(int r)
{
	printf("\nArea is : %.2f",PI*r*r);
}
