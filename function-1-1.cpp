#include <iostream>
double arrayMin(double* array, int size){
    int min = array[0];
    for (int i = 0; i < size; i++){
        if (min>array[i]){
            min = array[i];
        }
    }
    return min;
}     

