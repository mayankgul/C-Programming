#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int result = 1;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            result += i + (num / i);
    }

    if (result == num)
    {
        printf("%d is a perfect number\n", num);
    }
    else
    {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}
