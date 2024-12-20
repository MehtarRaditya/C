#include <stdio.h>

int array1(void){
  int arr[2][2];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Masukkan array (%d,%d): ", i,j);
      scanf("%d", &arr[i][j]);
    }
  }
  
  printf("(%d) ", arr[0][0]);
  printf("(%d)\n", arr[0][1]);
  printf("(%d) ", arr[1][0]);
  printf("(%d)", arr[1][1]);
}

int main(void){
  array1();
}+