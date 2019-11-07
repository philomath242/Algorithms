#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ithsmallest(int array[], int start, int end, int i);
int indexOf(int array[], int value);
int Partition(int array[], int start, int end);
void MedianQuickSort(int unsorted_array[], int start, int end);
int MedianPartition(int array[], int start, int end);
void Print(int array[], int size);
void Exchange(int array[], int i, int j);

int main()
{
    int numbers[] = {55, 35, 21, 30, 48, 56, 36, 12, 49, 33, 42, 54, 29, 24, 26, 47, 46, 25, 32, 40, 13, 19, 38, 9, 18, 37, 11, 17};
    int n = sizeof(numbers) / sizeof(int);
    Print(numbers, n);
    printf("%d\n", ithsmallest(numbers, 0, n, 6));
    MedianQuickSort(numbers, 0, n - 1);
    Print(numbers, n);

    return 1;
}
int ithsmallest(int array[], int start, int end, int i)
{
    if (i > 0 && i <= end - start + 1)
    {
        int index = Partition(array, start, end);
        if (index - start == i - 1)
            return array[index]; //  9 5 1 6 7 2 8 4 3 4 1
        else if (index - start > i - 1)
            return ithsmallest(array, start, index - 1, i);
        else
            return ithsmallest(array, index + 1, end, i - index + start - 1);
    }
}
void MedianQuickSort(int unsorted_array[], int start, int end)
{
    if (start < end)
    {
        int pivot = MedianPartition(unsorted_array, start, end);
        MedianQuickSort(unsorted_array, start, pivot - 1);
        MedianQuickSort(unsorted_array, pivot + 1, end);
    }
    return;
}
int Partition(int array[], int start, int end)
{
    int pivot = array[end], i = start - 1, j, temp;

    for (j = start; j <= end - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            Exchange(array, j, i);
        }
    }
    Exchange(array, j, i + 1);
    return i + 1;
}
int MedianPartition(int array[], int start, int end)
{
    int pivot = ithsmallest(array, start, end, (end - start + 1) / 2),  i = indexOf(array, pivot);
    Exchange(array, end, i);
    return Partition(array, start, end);
}
int indexOf(int array[], int value)
{
    int i = 0;
    while (array[i] != value)
    {
        i++;
    }
    return i;
}
void Print(int array[], int size)
{
    int i;
    printf("[ ");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\b\b ]\n");
    return;
}
void Exchange(int array[], int i, int j)
{
    int *temp = (int *)malloc(sizeof(int));
    *temp = array[i];
    array[i] = array[j];
    array[j] = *temp;
    free(temp);
    return;
}
