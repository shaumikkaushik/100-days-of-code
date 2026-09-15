#include <stdio.h>

void count_digits(int n)
{
    int count = 0;

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        if (n < 0)
            n = -n;

        while (n != 0)
        {
            n = n / 10;
            count++;
        }
    }

    printf("Number of digits = %d", count);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    count_digits(n);

    return 0;
}