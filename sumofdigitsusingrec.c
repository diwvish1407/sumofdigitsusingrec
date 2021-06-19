// To find out the sum of the digits of the given number using recursion.

#include <stdio.h>
int num, sum;

int rec_sumOfDigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return ((num % 10) + rec_sumOfDigits(num / 10));
}

int main()
{
    printf("Enter the number : ");
    scanf("%d", &num);

    sum = rec_sumOfDigits(num);

    printf("The sum of digits is %d\n", sum);

    return 0;
}
