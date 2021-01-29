#include <stdio.h>

int Policz(int a, int b)
{
    return a*b;
}

int main()
{
    printf("Hello, world!\n");
    printf("Hello, new world!\n");
    printf("2+3=%d", Policz(2, 3));
    return 0;
}