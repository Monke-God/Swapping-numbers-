#include <stdio.h>

int main()
{
    int a, b;
    printf("Input two integers\n");
    printf("A:  ");
    scanf("%d", &a);
    printf("B:  ");
    scanf("%d", &b);
    a += b;
    b -= a;
    a += b;
    b = -b;
    printf("A:  %d\n", a);
    printf("B:  %d\n", b);
    return 0;
}
