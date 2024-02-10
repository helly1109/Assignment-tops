//16. Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

   
    while (i <= n) {
        sum += i;
        ++i;
    }

   
    printf("Sum of natural numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
