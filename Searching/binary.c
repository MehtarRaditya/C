#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}



int main()
{
    int arr[] = {2, 4, 7, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 20;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Elemen %d ditemukan pada indeks %d\n", target, result);
    else
        printf("Elemen %d tidak ditemukan dalam array\n", target);

    return 0;
}
