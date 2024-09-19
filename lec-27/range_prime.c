// print prime number between 1 to 200

#include<stdio.h>
#include<conio.h>
void printPrime();
void main()
{
    printPrime();
    getch();
}
void printPrime(){
    int i,j,start=1,end=200,flag=0;
    for(i=start;i<=end;i++){
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("%d\t",i);
        }else{
            flag=0;
        }
    }
}