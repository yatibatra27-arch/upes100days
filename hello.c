Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3  printf("Quotient=Undefined\n");
    } else {
        int quotient = num1 / num2;
        printf("Quotient=%d\n", quotient);
    }
    return 0;
}
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    if (scanf("%d %d", &num1, &num2) != 2) {
        return 1;
    }

    // Calculate arithmetic operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;

    // Print initial results
    printf("Sum=%d, Diff=%d, Product=%d, ", sum, diff, product);

    // Safely handle division by zero
    if (num2 == 0) {
      



    
    
    




    


    

