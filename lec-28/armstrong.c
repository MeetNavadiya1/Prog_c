// check whether number is armstrong or not

#include<stdio.h>
#include<conio.h>
int armstrong(int);
void main()
{
    int num,ans;
    printf("Enter number : ");
    scanf("%d",&num);
    ans = armstrong(num);
    if(ans==num){
        printf("%d is armstrong",ans);
    }else{
        printf("%d is not armstrong",num);
    }
    getch();
}
int armstrong(int num){
    int no,sum;
    while(num>=1){
        no = num%10;
        sum += no*no*no;
        num/=10;
    }
    return sum;
}