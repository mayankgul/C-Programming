#include <stdio.h>
#include <limits.h>

int main()
{
    printf("int: exceeded lower limit: %d, exceeded upper limit: %d\n", INT_MIN - 1, INT_MAX + 1);
    printf("unsigned int: exceeded upper limit: %u\n", UINT_MAX + 1);
    printf("short int: exceeded lower limit: %d, exceeded upper limit: %d\n", SHRT_MIN - 1, SHRT_MAX + 1);
    printf("short unsigned int: exceeded upper limit: %u\n", USHRT_MAX + 1);
    printf("long int: exceeded lower limit: %ld, exceeded upper limit: %ld\n", LONG_MIN - 1, LONG_MAX + 1);
    printf("unsigned long int: exceeded upper limit: %lu\n", ULONG_MAX + 1);
    printf("long long int: exceeded lower limit: %lld, exceeded upper limit: %lld\n", LLONG_MIN - 1, LLONG_MAX + 1);
    printf("unsigned long long int: exceeded upper limit: %llu\n", ULLONG_MAX + 1);

    return 0;
}