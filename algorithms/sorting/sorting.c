// a simple bubble sort will be fine for small input sizes
void bubble_sort(int *arr, int length){
    int i, k;

    while(1 == 1){
        k = 0; // swap tracker

        for(i = 0; i < length - 1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

                k++;
            }
        }

        // if no swaps occurred
        if(k == 0){
            break;
        }
    }
}