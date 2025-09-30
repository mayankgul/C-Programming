#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    printf("%d %d", a, b);

    for (int i = 2; i < n; i++)
    {
        int term = a + b;
        printf(" %d", term);
        a = b;
        b = term;
    }

    printf("\n");
    return 0;
}
