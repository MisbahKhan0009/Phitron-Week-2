#include<stdio.h>


int main() {

  int num;
 
  scanf("%d", & num);
  int isprime = 0;

  for (int i = 2; i < num/2; i++) {
    if (num % i == 0) {
      isprime = 1;
      break;
      
    }
  }

  if (isprime == 0) {
    printf("Prime");
  } 
  else {
    printf("Composite");
  }
  return 0;
}