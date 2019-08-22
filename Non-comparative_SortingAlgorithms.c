
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
        count[unsorted_array[i]] = count[unsorted_array[i]] + 1;
    }
    for(i = 1; i <= max; i++){
        count[i] += count[i - 1];
    }
    for(i = size - 1; i >= 0; i--){
        output[count[unsorted_array[i]]] = unsorted_array[i];
        count[unsorted_array[i]]--;
    }
    printf("Array after sorting \n"); 
    Print(output, size); 
    
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
