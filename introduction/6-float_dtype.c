#include <stdio.h>

int main()
{
    float var1 = 3.141592653589793238462643;
    double var2 = 3.141592653589793238462643;
    long double var3 = 3.141592653589793238462643;

    printf("float: size %zu, value %.25f\n", sizeof(float), var1); // precise upto 7 places (including integer part)
    printf("double: size %zu, value %.25lf\n", sizeof(double), var2); // precise upto 16 places (including integer part)
    printf("long double: size %zu, value %.25Lf\n", sizeof(long double), var3);

    int var4 = 4/9;
    float var5 = 4/9;
    float var6 = 4.0f/9.0f;
    printf("%d, %.2f, %.2f\n", var4, var5, var6);

    return 0;
}