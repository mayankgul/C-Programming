#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int sum = 0;
    int num_copy = num;

    while (num_copy > 0)
    {
        int digit = num_copy % 10;
        int factorial = 1;
        for (int i = digit; i >= 2; i--)
        {
            factorial *= i;
        }

        sum += factorial;
        num_copy /= 10;
    }

    if (sum == num)
        printf("%d is a strong number\n", num);
    else
        printf("%d is not a strong number\n", num);

    return 0;
}
