#include <stdio.h>

int numOfDigits(int num)
{
    int digits = 0;

    while (num > 0)
    {
        digits++;
        num /= 10;
    }

    return digits;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int digits = numOfDigits(num);

    int sum = 0;
    int num_dup = num;
    while (num_dup > 0)
    {
        int digit = num_dup % 10;

        int temp_sum = 1;
        for (int i = 0; i < digits; i++)
        {
            temp_sum *= digit;
        }

        sum += temp_sum;

        num_dup /= 10;
    }

    if (num == sum)
        printf("%d is an armstrong number\n", num);
    else
        printf("%d is not an armstrong number\n", num);

    return 0;
}
