#include <iostream>
#include <cmath>
#include <algorithm>
int binary_to_int(int binary_digits[],int number_of_digits){
    int sum = 0;
    int power = 0;
    for (int i = number_of_digits - 1 ; i < number_of_digits; i--){
        if (binary_digits[i] == 1){
            sum += pow(2,power);
        }
        power++;
    }
    return sum;
}