
#include <stdio.h>
#include <math.h>

void InsertionSort(int unsorted_array[], int size);
void SelectionSort(int unsorted_array[], int size);
void MergeSort(int unsorted_array[], int left, int right);
void Merge(int unsorted_array[], int left, int middle, int right);
void BubbleSort(int unsorted_array[], int size);
void QuickSort(int unsorted_array[], int start, int end);
int Partition(int unsorted_array[], int start, int end);
void HeapSort(int array[], int size);
void Heapify(int array[], int size, int i);
void Print(int array[], int size);

int main(){
    int numbers[] = {9, 6, 1, 3, 7, 2, 8, 5, 4};
    int n = sizeof(numbers)/sizeof(int);
    Print(numbers, n);
    MergeSort(numbers, 0, n - 1);
    Print(numbers, n);  
    
    
}
void InsertionSort(int unsorted_array[], int size){
    int i, j, key;
    for(i = 1; i< size; i++){
        key = unsorted_array[i];
        j = i - 1;
        while(j >= 0 && unsorted_array[j] > key){
            unsorted_array[j + 1] = unsorted_array[j];
            j--;
        }
        unsorted_array[j + 1] = key;
    }
    return;
}
void SelectionSort(int unsorted_array[], int size){
    int i, min, j, key;
    for(i = 0; i < size - 1; i++){
        min = i;
        for(j = i + 1; j < size; j++){
            if(unsorted_array[j] < unsorted_array[min]){
                min = j;
            }
        }
       key = unsorted_array[i];
       unsorted_array[i] = unsorted_array[min];
       unsorted_array[min] = key;
    }
    return;
    
}
void MergeSort(int unsorted_array[], int left, int right){
    if(left < right){
        int middle = (int)floor((left + right)/2);
        MergeSort(unsorted_array, left, middle);
        MergeSort(unsorted_array, middle + 1, right);
        Merge(unsorted_array, left, middle, right);
    }
    return;
}
void Merge(int unsorted_array[], int left, int middle, int right){
    int i, j, k; 
    int n1 = middle - left + 1; 
    int n2 =  right - middle; 

    int Left[middle - left + 1], Right[right - middle]; 
    
    for (i = 0; i < middle - left + 1; i++)Left[i] = unsorted_array[left + i]; 
    for (j = 0; j < right - middle; j++)Right[j] = unsorted_array[middle + j + 1]; 
  
    i = 0; j = 0; k = left;
    
    while (i < middle - left + 1 && j < right - middle){ 
        if (Left[i] <= Right[j]){ 
            unsorted_array[k] = Left[i]; 
            i++; 
        } 
        else{ 
            unsorted_array[k] = Right[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < middle - left + 1){ 
        unsorted_array[k] = Left[i]; 
        i++; k++; 
    }
    while (j < n2){ 
        unsorted_array[k] = Right[j]; 
        j++; k++; 
    } 
    return;
}
void BubbleSort(int unsorted_array[], int size){
    int i, j, temp, swapped;
    for(i = 0; i < size - 1; i++){
        swapped = 0; 
        for (j = 0; j <size - i - 1; j++){ 
            if (unsorted_array[j] > unsorted_array[j + 1]){ 
               temp = unsorted_array[j];
               unsorted_array[j] = unsorted_array[j + 1];
               unsorted_array[j + 1] = temp;
               swapped = 1; 
            } 
        }
        if (swapped == 0)break; 
       } 
    return;   
}
void QuickSort(int unsorted_array[], int start, int end){
	if(start < end){
	   int index = Partition(unsorted_array, start, end);
	   
	   QuickSort(unsorted_array, start, index - 1);
	   QuickSort(unsorted_array, index + 1, end);
	}
	return;
}
int Partition(int unsorted_array[], int start, int end){
	int pivot = unsorted_array[end], i = start - 1, j, temp;  
  
    for (j = start; j <= end - 1; j++){
        if (unsorted_array[j] <= pivot){
			i++;	
            temp = unsorted_array[j];
            unsorted_array[j] = unsorted_array[i];
            unsorted_array[i] = temp;
        }  
    }  
    temp = unsorted_array[end];
    unsorted_array[end] = unsorted_array[i + 1];
    unsorted_array[i + 1] = temp;  
    return i + 1;
}
void Heapify(int array[], int size, int i){
    int max = i, temp, left = 2*i + 1, right = 2*i + 2;
    
    if(left < size && array[i] < array[left]){
        max = left;
    }
    if(right < size && array[i] < array[right]){
        max = right;
    }
    if(max != i){
        temp = array[max];
        array[max] = array[i];
        array[i] = temp;
        Heapify(array, size, max);
    }
    return;
}

void HeapSort(int array[], int size){
    int i, temp;
    
    for(i = size/2 - 1; i >= 0; i--){
        Heapify(array, size, i);
    }
    for(i = size - 1; i >= 0; i--){
        temp = array[i];
        array[i] = array[0];
        array[0] = temp;
        
        Heapify(array, i, 0);
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








