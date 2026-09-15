#include <stdio.h>

int main() {
    int a, b, c;

    a = 10;
    b = 20;
    printf("Numbers before swapping are %d %d\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("Numbers after swapping are %d %d", a, b);

    return 0;
}