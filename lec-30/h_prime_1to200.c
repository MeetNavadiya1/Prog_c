// print all happy prime number between 1 to 200

#include <stdio.h>
#include <conio.h>
void happy_prime();
void main()
{
    happy_prime();
    getch();
}
void happy_prime()
{
    int i, no, sum = 0, num=0;
    for (i = 1; i <= 200; i++)
    {
        num = i;
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
        printf("%d\t", num);
    }
}