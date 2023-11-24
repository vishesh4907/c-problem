#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Save the original number

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num; // Reset originalNum to the initial value

    // Calculate the sum of cubes of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if it is an Armstrong number
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

