// check whether number is happy prime or not

#include <stdio.h>
#include <conio.h>
void happyPrime(int);
void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    happyPrime(num);
    getch();
}
void happyPrime(int num)
{
    int i, no, sum = 0;
    while (num >= 9)
    {
        while (num >= 1)
        {
            no = num % 10;
            sum += no * no;
            num /= 10;
        }
        num = sum;
        sum = 0;
    }
    printf("Answer is %d",num);
    if(num == 1){
        printf("\nNumber is Happy Prime");
    }else{
        printf("\nNumber is not Happy Prime");
    }
}