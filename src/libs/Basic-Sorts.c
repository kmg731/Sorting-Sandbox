#include <stdio.h>
#include "Common.h"

void
insertionSort(int* arr, int len){
        int i,j;

        for (int i = 0; i < len - 1; ++i){
                int min = i;

                for (j = i + 1; j < len; ++j){
                        if (arr[j] < arr[min]){
                                min = j;
                        }
                }

                if (min != i){
                        swap(&arr[i], &arr[min]);
                }
        }
}

void bubbleSort(int* arr, int len){
        int i, j;
        for (i = 0; i < len - 1; ++i){
                for (j = 0; j < len - i - 1; ++j){
                        if (arr[j] > arr[j + 1])
                                swap(&arr[j], &arr[j+1]);
                }
        }
        
}
