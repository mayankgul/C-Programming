#include <stdio.h>

int main()
{
    int binary;
    printf("Enter binary number: ");
    scanf("%d", &binary);

    int copy = binary, decimal = 0, weight = 1;
    while (copy > 0)
    {
        decimal += (copy % 10) * weight;
        copy /= 10;
        weight *= 2;
    }

    printf("%d in decimal is %d\n", binary, decimal);
    return 0;
}
