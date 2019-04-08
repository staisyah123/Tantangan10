// Program Bubble sort
#include <stdio.h>

// fungsi menukar posisi
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    int xpp=*yp;
    *yp = temp;
}

// fungsi untuk mengekseskusi buble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)


       for (j = 0; j < n-i-1; j++)
           if (arr[j] < arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
/* fungsi cetak array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

// program utama
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
