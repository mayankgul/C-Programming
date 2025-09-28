#include <stdio.h>

#define PI 3.14159
#define add(x, y) x + y

#define greater(x, y) if (x > y) \
                        printf("%d is greater than %d\n", x, y); \
                      else if (y > x) \
                        printf("%d is greater than %d\n", y, x); \
                      else \
                        printf("%d is equal to %d\n", x, y);

int main()
{
    printf("%.5f\n", PI);
    printf("%d\n", add(3, 4));
    greater(3, 4);
    greater(3, 3);

    // pre defined constants
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);

    const int var = 10;
    printf("%d\n", var);

    return 0;
}