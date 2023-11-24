#include <stdio.h>

int main() 
{
    int rows, cols,i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **arr; // Declare a pointer to a pointer for the 2D array

    // Allocate memory for the array of pointers to rows
    arr = (int **)malloc(rows * sizeof(int *));
    

    // Allocate memory for each row
    for (i = 0; i < rows; i++) 
	{
        arr[i] = (int *)malloc(cols * sizeof(int));
        
    }

    // Insert elements into the 2D array
    printf("Enter %d x %d elements:\n", rows, cols);
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            scanf("%d", &arr[i][j]);
        }
    }

    // Display elements in the 2D array
    printf("Elements in the 2D array:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < cols; j++) 
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}

