#include <stdio.h>

#define MAX 200

int main (void) {
   int ndx, isFizz, isBuzz;

   for (ndx = 0; ndx <= MAX; ndx++) {

		if (isFizz = !(ndx % 3)) {
   		printf("Fizz");
   	}
   	if (isBuzz = !(ndx % 5)) {
   		printf("Buzz");
   	}
   	if (!isFizz && !isBuzz) {
   		printf("%d", ndx);
   	}

   	printf("\n");
   }

   return 0;
}
