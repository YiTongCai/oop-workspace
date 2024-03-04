#include <iostream>
extern double array_mean(int[], int);

int main() {
    int array[6] = {1,2,3,4,5,6};
    std::cout << "The average is: " << array_mean(array,6) << std::endl;
    return 0;
}