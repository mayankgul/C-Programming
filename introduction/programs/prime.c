#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int upper = ceil(sqrt(num));
    for (int i = 2; i <= upper; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number\n", num);
            return 0;
        }
    }

    printf("%d is a prime number\n", num);

    return 0;
}
