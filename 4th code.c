#include <stdio.h>

void calculate_factorial(int n)
{
    int i;
    int fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    calculate_factorial(n);

    return 0;
}