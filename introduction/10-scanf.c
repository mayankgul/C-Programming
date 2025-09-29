#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a (%p): ", (void*)&a);
    scanf("%d", &a);

    printf("Enter b (%p): ", (void*)&b);
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
}