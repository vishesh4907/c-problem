#include <stdio.h>  
#include <stdlib.h>  // use stdlib.h header file to use abs() function.  
  
int main()  
{  
    int num, n; // declare the local variable  
    printf (" Enter a number to display the absolute value: ");  
    scanf ("%d", &num);  
      
        /* define the abs() function to convert the given number into the absolute value. */  
    n = abs (num);  
      
    printf ("\n The absolute value of %d is %d. ", num, n);  
    return 0;  
}  
