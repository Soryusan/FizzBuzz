#include <stdio.h>

#define MAX 200

int main (void) {
   int i, isFizz, isBuzz;

   for (i = 0; i < MAX; i++) {
   	isFizz = (i % 3 == 0);
   	isBuzz = (i % 5 == 0);

   	if (isFizz && isBuzz) {
   		printf("Fizz Buzz\n");
   	}
   	else if (isFizz) {
   		printf("Fizz\n");
   	}
   	else if (isBuzz) {
   		printf("Buzz\n");
   	}
   	else {
   		printf("%d\n", i);
   	}
   	
   }

   return 0;
}