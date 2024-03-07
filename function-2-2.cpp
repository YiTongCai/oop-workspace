#include <iostream>
#include <cmath>
#include <algorithm>
int binary_to_int(int binary_digits[],int number_of_digits){
    int sum = 0;
    int count = 0;
    for (int i = number_of_digits - 1 ; i < number_of_digits; i--){
        sum += binary_digits[i] * 2^count;
        }
        count++;
    return sum;
}