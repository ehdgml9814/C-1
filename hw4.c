#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num, i;
    printf("please enter a number: ");
    scanf("%d", &num);
    if (num == 1)
        printf("It is not a prime number.");
    else if (num == 2)
        printf("It is a prime number.");
    else
        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                if (num == i)
                    printf("It is a prime number.");
                else
                    printf("It is not a prime number.");
                break;
            }
        }
    return 0;
}