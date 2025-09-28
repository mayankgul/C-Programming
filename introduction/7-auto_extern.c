#include <stdio.h>

int main()
{
    extern int b;
    printf("%d\n", b);

    return 0;
}