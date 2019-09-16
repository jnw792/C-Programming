#include <stdio.h>
#include <stdlib.h>

size_t maxSeq(int * array, size_t n);

int main() {
  int array1[] = {1, 3, 5, 7, 3};
  if(maxSeq(array1, 5) != 4) {
    printf("Failed on 1,3,5,7,3\n");
    exit(EXIT_FAILURE);
  }

  int array2[] = {3, -3, 0, -2, -8, -20};
  if(maxSeq(array2, 6) !=2) {
    printf("Failed on 3,-3,0,-2,-8,-20\n");
    exit(EXIT_FAILURE);
  }

  int array3[] = {1};
  if(maxSeq(array3,1) !=1){
    printf("Failed on 1\n");
    exit(EXIT_FAILURE);
  }

  int array4[] = {1, 1, 1, 5};
  if(maxSeq(array4, 4) !=2) {
    printf("Failed on 1,1,1,5\n");
    exit(EXIT_FAILURE);
  }

  int array5[] = {2, 4, 6, 10, 14, 16, -18, 20};
  if(maxSeq(array5, 8) !=6) {
    printf("Failed on 2,4,6,10,14,16,-18,20\n");
    exit(EXIT_FAILURE);
  }

  int array6[] = {-8};
  if(maxSeq(array6,1) !=1) {
    printf("Failed on -8\n");
    exit(EXIT_FAILURE);
  }

  if(maxSeq(array5, 0)) {
    printf("Failed on 2,4,6,10,14,16,-18,20 for NULL\n");
    exit(EXIT_FAILURE);
  }
  
  return EXIT_SUCCESS;
}


    
