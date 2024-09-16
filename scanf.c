#include <stdio.h>

int main() {
   int num;
   printf("Enter an integer: ");
   int result = scanf("%d", &num);

   if (result == 1) {
       printf("You entered: %d\n", num);
   } else {
       printf("Failed to read an integer.\n");
   }

   return 0;
}
