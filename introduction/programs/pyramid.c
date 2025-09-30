#include <stdio.h>

int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        int spaces = rows - i;
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        int stars = 2 * (i - 1) + 1;
        for (int k = 1; k <= stars; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
