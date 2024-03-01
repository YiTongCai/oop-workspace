#include <iostream>
bool is_fanarray(int array[], int n){
    if (n < 1){
        return false;
    }
    int len = n/2;
    for (int i = 0 ; i < len ; i++) {
        if (array[i]!=array[len-i]){
            return false;
        }
    }
    return true;
} 