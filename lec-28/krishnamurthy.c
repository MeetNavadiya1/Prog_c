// ckeck whether number is krishnamurthy or not

#include<stdio.h>
#include<conio.h>
int krishnamurthy(int);
void main()
{
    int num,ans;
    printf("Enter numbe : ");
    scanf("%d",&num);
    ans=krishnamurthy(num);
    if(ans==num){
        printf("%d is krishnamurthy",ans);
    }else{
        printf("%d is not krishnamurthy",num);
    }
    getch();
}
int krishnamurthy(int num){
    int i,no,fec=1,sum=0;
    while(num>=1){
        no = num%10;
        for(i=1;i<=no;i++){
            fec *= i;
        }
        num/=10;
        sum+=fec;
        fec=1;
    }
    return sum;
}