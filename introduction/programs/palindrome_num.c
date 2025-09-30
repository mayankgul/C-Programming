#include <stdio.h>

long long unsigned reverse_num(long long unsigned num)
{
    long long unsigned actual_num = num;
    long long unsigned reversed_num = 0;

    while (actual_num > 0)
    {
        reversed_num = (reversed_num * 10) + (actual_num % 10);
        actual_num = actual_num / 10;
    }

    return reversed_num;
}

int main()
{
    long long unsigned num;
    printf("Enter number: ");
    scanf("%llu", &num);

    if (reverse_num(num) == num)
        printf("%llu is a palindrome\n", num);
    else
        printf("%llu is not a palindrome\n", num);

    return 0;
}
