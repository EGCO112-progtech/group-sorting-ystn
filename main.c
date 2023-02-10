#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorting.h"



int main(int argc, char* argv[]) {
  int i,N, *a;
  N = argc - 2;
  a = (int*)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++)
    {
      a[i] = atoi(argv[i+2]);
    }  
  printf("Input :");
  display(a,N);
  if(!(strcmp(argv[1],"bubble"))){
    bubbleSort(a,N); 
  }
  else if(!(strcmp(argv[1],"insertion"))){  
    insertionSort(a,N); 
  }
  else{
    selectionSort(a,N);
  }
  printf("\n");
  display(a,N);
 return 0;
}


