#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main(void){
  int arr[] = {6,4,22,15,7,3,26};
  int size = sizeof(arr)/sizeof(arr[0]);

  selectionSort(arr, size);

  for (int i = 0; i < size ; i++){
    printf("num %d \n", arr[i]);
  }
}