void selectionSort(int array[], int len_array){
    int min_index = 0;
    
    for(int i = 0; i < len_array; i++){
        min_index = i;
        for(int j = i + 1; j < len_array; j++){
            if(array[min_index] > array[j]){
                min_index = j;
            }
        }
        if(array[i] != array[min_index]){
            int temp = array[min_index];
            array[min_index] = array[i];
            array[i] = temp;
        }
    }
}
