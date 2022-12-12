#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void creare(int *arr, int n)
{
    int i, j, flag, nr;
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        flag = 1;
        while (flag)
        {
            flag = 0;
            nr = rand() % 1000;
            for (j = 0; j < n; j++)
                if (arr[j] == nr)
                    flag = 1;
            if (!flag)
            {
                arr[i] = nr;
                break;
            }
        }
    }
}
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
void quickSort(int arr[], int n, int left, int right)
{
    int i, j, aux, x, iteratie = 1; // x elem din mijlocul partitiei
    x = arr[(left + right) / 2];
    i = left;
    j = right;
    do
    {
        while (arr[i] < x)
            i++; // cand venim din stanga
        while (arr[j] > x)
            j--; // cand venim din dreapta
        if (i <= j)
        { // swap
            aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    //  printf("\nDupa iteratia %d :", iteratie);
    // afisare(arr, n);
    if (left < j)
        quickSort(arr, n, left, j);
    if (right > i)
        quickSort(arr, n, i, right);
}
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
// SHellsort
void shellsort(int arr[], int num)
{
    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for (k = j - i; k >= 0; k = k - i)
            {
                if (arr[k + i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k + i];
                    arr[k + i] = tmp;
                }
            }
        }
    }
}
//.................
int main()
{

    int arr[] = {33, 6, 7, 34, 23, 7, 8, 0, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    creare(arr, size);
    printf("\nVectorul nesortat este:");
    afisare(arr, size);

    // bubblesort
    printf("\nVectorul sortat este(BUBBLESORT):");
    bubbleSort(arr, size);
    afisare(arr, size);
    //.........

    // quicksort

    printf("\nVectorul sortat este(QUICKSORT):");
    quickSort(arr, size, 0, 5);
    afisare(arr, size);
    //..........

    // shellsort
    printf("\nVectorul sortat este(SHELLSORT):");
    shellsort(arr, size, 0, n - 1);
    afisare(arr, size);
    //..........

    return 0;
}