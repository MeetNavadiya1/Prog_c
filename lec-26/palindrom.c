// check whether number is palindrom or not

#include<stdio.h>
#include<conio.h>
int palindrom(int);
void main()
{
    int num,ans;
    printf("Enter number : ");
    scanf("%d",&num);
    ans = palindrom(num);
    if(ans == num){
        printf("%d is Palindrom",ans);
    }else{
        printf("%d is not palindrom",num);
    }
    getch();
}
int palindrom(int num){
    int rev=0,i,no;
    while(num>=1){
        no = num%10;
        rev = rev*10+no;
        num /= 10;
    }
    return rev;
}