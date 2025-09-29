#include <stdio.h>

int main()
{
    // bitwise
    int a = 10, b = 5;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = a << 2;
    int g = a >> 2;
    a <<= 3;
    b >>= 3;

    printf("a: %d, b: %d, c: %d, d: %d, e: %d, f: %d, g: %d", a, b, c, d, e, f, g);

    return 0;
}