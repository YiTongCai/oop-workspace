#include <iostream>
extern double weighted_average(int[], int);

int main() {
    int array[10] = {2,9,3,7,5,4,5,2,9,8};
    std::cout << "The answer is: " << weighted_average(array,10) << std::endl;
    return 0;
}