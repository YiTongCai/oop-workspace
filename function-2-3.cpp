#include <iostream>
bool is_palindrome(int integers[], int length){
    if (length = 0){
        return -1;
    }
    if (length < 0){
        return -1;
    }
    for (int i = 0 ; i < length/2 ; i++) {
        if (integers[i] > integers[i+1]){
            return -2;
        }
        if (integers[i] != integers[length-i-1]){
            return -2;
        }
        if (integers[i] == integers[length/2]){
            return -2;
        }
    }
    return true;
} 

int sum_array_elements(int integers[], int length){
    if (length = 0){
        return -1;
    }
    if (length < 0){
        return false;
    }
    
    int sum = 0;
    for (int i = 0 ; i < length ; i++){
        sum += integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length){
    if (length = 0){
        return -1;
    }
    if (length < 0){
        return false;
    }
    if (!is_palindrome(integers,length)){
        return -2;
    }
    return sum_array_elements(integers,length);
} 


