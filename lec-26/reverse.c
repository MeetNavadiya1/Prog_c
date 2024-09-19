// find reverse number of entered number

#include<stdio.h>
#include<conio.h>
int reverse(int);
void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Reverse number is %d",reverse(num));
    getch();
}
int reverse(int num){
    int rev=0,i,no;
    while(num>=1){
        no = num%10;
        rev = rev*10+no;
        num /= 10;
    }
    return rev;
}