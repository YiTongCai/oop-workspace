#include <iostream>
#include <string>
using namespace std;
double* duplicateArray(double* array, int size){
    std::string arr = "";
    for (int i = 0; i < size; i++){
        arr += std::to_string(array[i]);
    }
    std::cout<< "The new array is : " <<arr<<std::endl;
}