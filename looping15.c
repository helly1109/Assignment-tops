//15.Calculate sum of 10 numbers using of while loop
#include <stdio.h>

int main() {
    int count = 1; 
    int number;    
    int sum = 0;   

   
    while (count <= 10) {
        printf("Enter number %d: ", count);
        scanf("%d", &number);

        sum += number; 
        ++count;       
    }

    
    printf("Sum of the 10 numbers = %d\n", sum);

    return 0;
}
