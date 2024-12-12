#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int array[], int len_array){
    for(int i = 0; i < len_array; i++){
        bool swap = false;
        for(int j = 0; j < len_array-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = true;
            }
        }
        if(!swap){
            break;
        }
    }
}
