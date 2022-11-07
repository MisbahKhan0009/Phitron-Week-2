#include<stdio.h>

int main() {

  int a, b, c, d, min = 0, max = 0;
  scanf("%d %d %d %d", & a, & b, & c, & d);

  if (a > b && a > c && a > d) {
    max = a;
  } else if (a < b && a < c && a < d) {
    min = a;
  }
  if (b > a && b > c && b > d) {
    max = b;
  } else if (b < a && b < c && b < d) {
    min = b;
  }
  if (c > a && c > b && c > d) {
    max = c;
  } else if (c < a && c < b && c < d) {
    min = c;
  }
  if (d > a && d > b && d > c) {
    max = d;
  } else if (d < a && d < b && d < c) {
    min = d;
  }

  printf("maximum: %d, minimum: %d", max, min);
  return 0;
}