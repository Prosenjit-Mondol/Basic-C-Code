#include <stdio.h>
int main() {
   int i, j, is_prime;

   printf("Prime numbers between 100 and 200 are: \n");

   for(i = 101; i < 200; i += 2) {
      is_prime = 1;

      for(j = 2; j <= i/2; j++) { // check if the number is divisible by any number between 2 and n/2
         if(i % j == 0) {
            is_prime = 0;
            break;
         }
      }

      if(is_prime == 1) { // if the number is not divisible by any number between 2 and n/2, it is prime
         printf("%d ", i);
      }
   }

   return 0;
}
