#include <stdio.h>

int main() {
    // Initialize the array with your values
    int a[] = {6, 12, 9, 21, 8};
    
    // Calculate the total number of elements in the array
    int N = sizeof(a) / sizeof(a[0]);
    
    // Step 1: Assume the first element is the largest
    int max_val = a[0];
    
    // Step 2: Loop through the rest of the array elements
    for (int i = 1; i < N; i++) {
        // Step 3: If current element is bigger, update max_val
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    
    // Step 4: Print the final result
    printf("The largest element in the array is: %d\n", max_val);
    
    return 0;
}
