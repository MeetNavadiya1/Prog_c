// print fibonacci series 1,1,2,3,5,8,13

#include <stdio.h>
#include <conio.h>
void fibonacci(int);
void main()
{
    int num;
    printf("Enter number more than 2 : ");
    scanf("%d", &num);
    fibonacci(num);
    getch();
}
void fibonacci(int num)
{
    int i, prev1 = 1, prev2 = 1, sum, temp;
    if (num == 1)
    {
        printf(" 1 ");
    }
    else if (num == 2)
    {
        printf(" 1 ");
        printf(" 1 ");
    }
    else
    {
        printf(" 1 ");
        printf(" 1 ");
        for (i = 1; i <= num - 2; i++)
        {
            sum = prev1 + prev2;
            printf(" %d ", sum);
            temp = prev1;
            prev1 = sum;
            prev2 = temp;
        }
    }
}