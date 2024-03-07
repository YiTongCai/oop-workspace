#include <iostream>
#include <cmath>
#include <algorithm>
extern int binary_to_int(int binary_digits[],int);

int main() {
    int binary_digits[]={1,0,0,1,1,0,1,0};
    int number_of_digits = 8;
    std::cout<<"The integer is : "<<binary_to_int(binary_digits,number_of_digits)<<std::endl;
    return 0;
}
