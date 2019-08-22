
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void CountingSort(int[] unsorted_array, int size);
void RadixSort(int[] unsorted_array, int size);
void BucketSort(int[] unsorted_array, int size);
void Print(int array[], int size);

int main()
{
    int numbers[] = {9, 6, 1, 3, 7, 2, 8, 5, 4};
    int n = sizeof(numbers)/sizeof(int);
    Print(numbers, n);

    return 1;
}
void CountingSort(int[] unsorted_array, int size){
    
    
    
    
}
void RadixSort(int[] unsorted_array, int size){
    
    
    
    
}
void BucketSort(int[] unsorted_array, int size){
    
    
    
    
    
    
    
    
    
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
