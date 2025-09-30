#include <stdio.h>

int area(int, int);
void callByValue(int, int);
void callByReference(int *, int *);

int main()
{
    int l, b;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);

    printf("Area: %d\n", area(l, b));

    int x = 10, y = 20;

    callByValue(x, y);
    printf("x: %d, y: %d", x, y);

    callByReference(&x, &y);
    printf("x: %d, y: %d", x, y);

    return 0;
}

int area(int length, int breadth)
{
    return length * breadth;
}

void callByValue(int x, int y)
{
    x = 100;
    y = 30;
}

void callByReference(int *x, int *y)
{
    *x = 100;
    *y = 30;
}