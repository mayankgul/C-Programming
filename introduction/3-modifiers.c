#include <stdio.h>
#include <limits.h>

int main()
{
    int var_int = 5; // or signed int, both are same
    int lower_int = INT_MIN;
    int upper_int = INT_MAX;
    printf("size of signed int: %zu, range: %d to %d\n", sizeof(var_int), lower_int, upper_int);

    unsigned int var_uint = 5;
    unsigned int lower_uint = 0;
    unsigned int upper_uint = UINT_MAX;
    printf("size of unsigned int: %zu, range: %u to %u\n", sizeof(var_uint), lower_uint, upper_uint);

    short int var_short = 5;
    short int lower_short = SHRT_MIN;
    short int upper_short = SHRT_MAX;
    printf("size of signed short int: %zu, range: %d to %d\n", sizeof(var_short), lower_short, upper_short);

    short unsigned int var_ushort = 5;
    short unsigned int lower_ushort = 0;
    short unsigned int upper_ushort = USHRT_MAX;
    printf("size of unsigned short int: %zu, range: %u to %u\n", sizeof(var_ushort), lower_ushort, upper_ushort);

    long int var_long = 5;
    long int lower_long = LONG_MIN;
    long int upper_long = LONG_MAX;
    printf("size of signed long int: %zu, range: %ld to %ld\n", sizeof(var_long), lower_long, upper_long);

    long unsigned int var_ulong = 5;
    long unsigned int lower_ulong = 0;
    long unsigned int upper_ulong = ULONG_MAX;
    printf("size of unsigned long int: %zu, range: %lu to %lu\n", sizeof(var_ulong), lower_ulong, upper_ulong);

    long long int var_llong = 5;
    long long int lower_llong = LLONG_MIN;
    long long int upper_llong = LLONG_MAX;
    printf("size of signed long long int: %zu, range: %lld to %lld\n", sizeof(var_llong), lower_llong, upper_llong);

    long long unsigned int var_ullong = 5;
    long long unsigned int lower_ullong = 0;
    long long unsigned int upper_ullong = ULLONG_MAX;
    printf("size of unsigned long long int: %zu, range: %llu to %llu\n", sizeof(var_ullong), lower_ullong, upper_ullong);

    return 0;
}