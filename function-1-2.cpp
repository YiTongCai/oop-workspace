#include <iostream>
void modifyArray(double* array, int size, double value){
    for (int i = 0; i < size; i++){
        array[i] = array[i] + value;
    }
    std::cout<< "The answer is ：" << array <<std::endl;
}