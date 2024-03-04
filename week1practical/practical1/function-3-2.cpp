#include <iostream>
int median_array(int array[], int n){
    if (n % 2 ==0){
        return 0;
    }
    if (n < 1){
        return 0;
    }
    for (int i=0; i < n; i++) {
        int num = 0;
        if (array[i]>array[i+1]){
            num = array[i];
            array[i] = array[i+1];
            array[i+1] = num;
        }
    }
    return array[n/2];
} 