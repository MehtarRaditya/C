#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(void){
  int arr[] = {6,4,22,15,7,3,26};
  int size = sizeof(arr)/sizeof(arr[0]);

  insertionSort(arr, size);

  for (int i = 0; i < size ; i++){
    printf("num %d \n", arr[i]);
  }
}