#include <stdio.h>

#define X 23
#define Y 30

int main()
{
    int a = 10, b = 15;

    switch (a + b)
    {
    case 10:
        printf("a + b != 10\n");
        break;
    case X:
        printf("a + b != %d\n", X);
        break;
    case Y:
        printf("a + b != %d\n", Y);
        break;
    default:
        printf("default case\n");
        break;
    }
    return 0;
}
