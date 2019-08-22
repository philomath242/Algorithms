#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void CountingSort(int unsorted_array[], int size);
void RadixSort(int unsorted_array[], int size);
void CountingSortforRadix(int unsorted_array[], int size, int digit);
void BucketSort(int unsorted_array[], int size);
void Print(int array[], int size);

int main()
{
    int numbers[] =   {9, 6, 1, 3, 7, 2, 8, 5, 4,}; // {89, 56, 11, 37, 78, 24, 81, 45, 64};
    int n = sizeof(numbers)/sizeof(int);
    Print(numbers, n);
    CountingSort(numbers, n);
    Print(numbers, n);

    return 1;
}
void CountingSort(int unsorted_array[], int size){
    int max = 0, i, output[size];
    for(i = 0; i < size; i++){
        if (unsorted_array[i] > max){
            max = unsorted_array[i];
        }
    }
    int count[max + 1];
    for(i = 0; i <= max; i++){
        count[i] = 0;
    }
    for(i = 0; i < size; i++){
        count[unsorted_array[i]]++;
    }
    for(i = 1; i <= max; i++){
        count[i] += count[i - 1];
    }
    for(i = size - 1; i >= 0; i--){
        output[count[unsorted_array[i]]] = unsorted_array[i];
        count[unsorted_array[i]]--;
    }
    /*int j = 0; i = 0;

    while(i <= size){
        while(count[j] > 0){
              unsorted_array[i] = j;
              count[j]--;
              i++;
              if(i > size) break;
        }
        j++;
    }*/
    for(i = 0; i < size; i++){
        unsorted_array[i] = output[i];
    }
    return;
}
void RadixSort(int unsorted_array[], int size){
    int max = 0, digit, i;

    for(i = 0; i < size; i++){
        if (unsorted_array[i] > max){
            max = unsorted_array[i];
        }
    }

    for(digit = 1; max / digit > 0; digit *= 10){
        CountingSortforRadix(unsorted_array, size, digit);
    }
    return;
}
void CountingSortforRadix(int unsorted_array[], int size, int digit){
    int output[size], i, count[10] = {0};

    for (i = 0; i < size; i++){
        count[(unsorted_array[i]/digit) % 10]++;
    }
    for(i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }
    for (i = size - 1; i >= 0; i--)
    {
        output[count[(unsorted_array[i]/digit) % 10] - 1] = unsorted_array[i];
        count[(unsorted_array[i]/digit) % 10]--;
    }
    for(i = 0; i < size; i++){
        unsorted_array[i] = output[i];
    }
    return;
}
void BucketSort(int unsorted_array[], int size){
    int i, j, count[size];
    for(i = 0; i < size; i++){
        count[i] = 0;
    }

    for(i = 0; i < size; i++){
        count[unsorted_array[i]]++;
    }

    for(i = 0, j = 0; i < size; i++){
        for(;count[i] > 0; count[i]--){
            unsorted_array[j++] = i;
        }
    }
    return;
}
void Print(int array[], int size){
    int i;
    printf("[ ");
    for(i = 0; i < size; i++){
        printf("%d, ", array[i]);
    }
    printf("\b\b ]\n");
    return;
}
