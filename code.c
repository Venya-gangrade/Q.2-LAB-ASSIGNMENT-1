#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    // Ask the user for the number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Check if the number of integers is positive
    if (n <= 0) {
        printf("Please enter a positive number of integers.\n");
        return 1;
    }

    int arr[n]; // Declare an array of size n

    // Read integers from the user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each integer to sum
    }

    // Calculate the average
    average = sum / n;

    // Print the result
    printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}
