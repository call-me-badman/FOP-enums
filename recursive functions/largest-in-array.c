#include <stdio.h>

// Recursive function to find largest element
int largest(int arr[], int n) {
    if (n == 1)               // Base case: only one element
        return arr[0];        // That element is the largest
    int max = largest(arr, n - 1); // Recursive call for first n-1 elements
    return (arr[n-1] > max) ? arr[n-1] : max; // Compare last element with max of rest
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Largest element is %d\n", largest(arr, n));
    return 0;
}
