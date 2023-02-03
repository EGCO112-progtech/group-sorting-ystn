#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int main(int argc, char* argv[]) {
  //int a[N]={3,2,6,7,3,1};
  int i,N, *a;

  N = argc - 1;
  a = (int*)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++)
  {
    a[i] = atoi(argv[i+1]);
  }
  display(a,N);
  bubbleSort(a,N); 
  insertion(a,N);
  selectionSort(a,N);
  //display(a,N);
 return 0;
}


