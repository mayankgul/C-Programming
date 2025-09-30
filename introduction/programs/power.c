#include <stdio.h>

int main()
{
    int num, power;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter power: ");
    scanf("%d", &power);

    double result = 1.0;
    for (int i = 0; power > 0 ? (i < power) : (i > power); power > 0 ? (i++) : (i--))
    {
        result *= power > 0 ? num : (1.0 / num);
    }

    printf("%d to the power %d is %.5f\n", num, power, result);
    return 0;
}
