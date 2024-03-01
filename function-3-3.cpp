#include <iostream>
double weighted_average(int array[], int n){
    if (n < 1){
        return 0.0;
    }
    double sum = 0.0;
    for (int i=0; i < n; i++) {
        double count = 0.0;
        for (int j=0; j < n; j++) {
            if (array[j] == array[i]){
                count ++ ;
            }
        }
    sum += array[i]*count/n;
    }
}