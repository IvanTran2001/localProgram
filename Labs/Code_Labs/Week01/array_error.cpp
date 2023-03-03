#include <iostream>

#define LENGTH          10

void printArray(int array[], int length);

int main (void) {
   int a[LENGTH] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
   int b[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   printArray(a, LENGTH);
   printArray(b, LENGTH * 2 + 3);

   int c[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int d[LENGTH] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

   printArray(c, LENGTH);
   printArray(d, LENGTH * 2 + 3);
   //std::cout << (b[12] is a(0));

   return EXIT_SUCCESS;
}

void printArray(int array[], int length) {
   for (int i = 0; i < length; ++i) {
      std::cout << "array[" << i << "] = " << array[i] << std::endl;
   }
   std::cout << std::endl;
}

/* By going over the array limit, I guess it goes further a head in the memory, in this case uses the array 'a's data.
*/
