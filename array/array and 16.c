//16.Accept 5 numbers from user and perform sum of array
#include <stdio.h>
int main() {
  int arr[5];
  int sum = 0;
  // Get the 5 numbers from the user
  printf("Enter 5 numbers: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  // Calculate the sum of the 5 numbers
  for (int i = 0; i < 5; i++) {
    sum += arr[i];
  }
  // Print the sum
  printf("The sum of the 5 numbers is: %d\n", sum);
  return 0;
}
