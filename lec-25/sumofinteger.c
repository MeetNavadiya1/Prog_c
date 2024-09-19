// Write a program to print all the numbers and sum of all the integers that are greater than 100 and less than 200 and are divisible by 7.

#include<stdio.h>
#include<conio.h>
void sumOfInteger();
int main()
{
    printf("Number that divisible by 7 is as below\n");
    sumOfInteger();
    getch();
}
void sumOfInteger(){
    int i,sum=0;
    for(i=100;i<=200;i++){
        if(i%7==0){
            printf("%d\t",i);
            sum += i;
        }
    }
    printf("\nSum is %d",sum);
}