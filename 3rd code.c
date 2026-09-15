#include <stdio.h>

int is_even(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_even(num))
        printf("%d is even", num);
    else
        printf("%d is odd", num);

    return 0;
}

int is_even(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}