//12. Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digitCount = 0;

    // Count the number of digits in the input number
    while (num != 0) {
        num /= 10;
        digitCount++;
    }

    // Reset num to the original value for further processing
    num = originalNum;

    // Calculate the sum of cubes of digits using mathematical formula
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == originalNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
