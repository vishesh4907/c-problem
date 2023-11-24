#include <stdio.h>

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5},i;
    int destinationArray[5];  // Assuming the destination array has enough space

    

    printf("Source Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", sourceArray[i]);
        destinationArray[i] = sourceArray[i];  // Copying each element to the destination array
    }

    printf("\nCopied Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}

