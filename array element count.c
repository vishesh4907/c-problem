#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 1, 5, 1},i;
    
    int targetElement = 4;  // Element to count the frequency for

    int frequency = 0;

    for (i = 0; i < 9; i++) {
        if (arr[i] == targetElement) {
            frequency++;
        }
    }

    printf("The frequency of element %d is: %d\n", targetElement, frequency);

    return 0;
}

