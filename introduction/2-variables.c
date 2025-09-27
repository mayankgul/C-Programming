#include <stdio.h>

int main()
{
    int var1 = 3;
    printf("%d, size: %zu\n", var1, sizeof(var1));
    // %d: d -> decimal
    // %zu: zu -> for size_t

    var1 = 4;
    printf("%d\n", var1);

    int var2;
    var2 = var1;
    printf("%d\n", var2);

    int var3, var4, var5;
    var3 = var4 = var5 = 10;
    printf("%d, %d, %d\n", var3, var4, var5);

    int var6 = 6, var7 = 7, var8 = 8;
    printf("%d, %d, %d\n", var6, var7, var8);

    return 0;
}