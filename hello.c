#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; // Initialized to 0 to avoid garbage values

    // Prompt user for input
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if input is a valid natural number
    if (n < 1) {
        printf("Error: Please enter a positive integer starting from 1.\n");
        return 1; 
    }

    // Loop from 1 to n and accumulate the total
    for (i = 1; i <= n; ++i) {
        sum += i; // Identical to sum = sum + i;
    }

    // Display the final result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
