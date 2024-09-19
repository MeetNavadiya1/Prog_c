// check whether number is prime or not

#include<stdio.h>
#include<conio.h>
int prime(int);
void main()
{
    int num,ans;
    printf("Enter number : ");
    scanf("%d",&num);
    ans = prime(num);
    if(ans == 1){
        printf("%d is not prime",num);
    }else{
        printf("%d is prime",num);
    }
    getch();
}
int prime(int num){
    int i,no;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            return 1;
        }
    }
    return 0;
}