#include <stdio.h>

int main() {

  int n, w, i = 0;
  int sum = 0;
  printf("Enter number of people: ");
  scanf("%d", &n);

  printf("Enter weight of %d people: ", n);

  for (i = 0; i < n; i++)

  {
    scanf("%d", &w);
    sum += w;
  }
  printf("Sum of weight is: %d", sum);
  return 0;
}