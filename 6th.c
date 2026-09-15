#include <stdio.h>

void calculate_power(int base, int exponent)
{
    int i;
    int result = 1;

    for (i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    printf("Result = %d", result);
}

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    calculate_power(base, exponent);

    return 0;
}