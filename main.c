#include <stdio.h>

#include "sorting.h"

int main(int argc, char* argv[]) {
  //int a[N]={3,2,6,7,3,1};
  int i,j = 0,new_number, N, *a;

  N = argc - 1;
  a = (int*)malloc(sizeof(int) * N);
  //display(a,N);
  bubbleSort(a,N); 
  insertion(a,N);

  selectionSort(a,N);
   //display(a,N);
 return 0;
}


