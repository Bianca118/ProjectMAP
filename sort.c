#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//.............................
void afisare(int arr[], int n)
{

    int i;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
// quicksort

//.................

// Bubblesort
void bubbleSort(int arr[], int size)
{
    int i, j, aux;

    for (i = 0; i < size - 1; i++)
    {

        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main()
{

    int arr[] = {33, 6, 7, 34, 23, 7, 8, 0, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("\nVectorul nesortat este:");
    afisare(arr, size);
    printf("\nVectorul sortat este(BUBBLESORT):");
    bubbleSort(arr, size);
    afisare(arr, size);
    return 0;
}