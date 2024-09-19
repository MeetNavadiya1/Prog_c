// print first 50 odd number

#include<stdio.h>
#include<conio.h>
void printOdd();
int main()
{
	printf("Fist 50 odd number is below\n");
	printOdd();
	getch();
}
void printOdd(){
    int i=1,odd=0;
    while(odd<50){
        if(i%10 == 0){
            printf("\n");
        }
        if(i%2 != 0){
            printf("%d\t",i);
            odd++;
        }
        i++;
    }
}