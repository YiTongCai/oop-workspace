#include <iostream>
extern double* duplicateArray(double* array, int size);

int main(){
    double array[]={7,2,3,4,1,5,9,0,8,6};
    int size = 10;
    std::cout<< "The new array is : " <<array<<std::endl;
    return 0;
}