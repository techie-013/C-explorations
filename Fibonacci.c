#include <stdio.h>
int main() {
    int num, first = 0, second = 1, next;

    // Get the number of terms from the user
    printf("Enter the number of elements in the Fibonacci series: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("The number of elements must be greater than 0.\n");
        return 0;
    }

    printf("Fibonacci series: ");
    for (int i = 1; i <= num; i++) {
        if (i == 1) {
            next = first;  // The first term is 0
        } else if (i == 2) {
            next = second; // The second term is 1
        } else {
            next = first + second; // Calculate the next term
            first = second;        // Update `first` to the previous `second`
            second = next;         // Update `second` to the new term
        }
        printf("%d\t", next); // Print the current term
    }
    return 0;
}
