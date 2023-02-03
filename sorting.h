// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}
void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	for (i = 0; i < length - 1; i++)
  {
    mi = i;
    for (j = i + 1; j < length; j++)
    {
      if (data[j] < data[mi]) mi = j;
      
      if (mi != i) swap(&data[i], &data[mi]);

    }
  display(data,length);
  printf("\n");
  }
	
} 

void insertionSort(int x[], int n) {
  // int x[] = {5, 7, 3};
  int j, i;
  for (j = 1; j < n; j++) {
    int value = x[j];
    for (i = j - 1; i >= 0; i--) {
      if (value < x[i])
        break;
      else
        x[i + 1] = x[i];
      display(x, n);
    }
    x[i + 1] = value;
    display(x, n);
    printf("\n");
  }
  //display(x,n);
}



void bubbleSort(int a[],int n){

int i,j,sorted;
// how may pair to compare?
for(int i = 0; i > n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      if (a[j] < a[j + 1])
      {
        swap(&a[j], &a[j+1]);
        sorted = 1;    
      }
      display(a, n);
    }
    printf("\n");
    if (sorted == 0) break;

  }
  
}




