// find sum of all digits

#include<stdio.h>
#include<conio.h>
int sumofdigit(int);
void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Sum is %d",sumofdigit(num));
    getch();
}
int sumofdigit(int num){
    int n,sum=0;
    while(num >= 1){
        n = num%10;
        sum += n;
        num /= 10;
    }
    return sum;
}
