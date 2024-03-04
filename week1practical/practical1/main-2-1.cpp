#include <iostream>
extern int min_element(int[], int);

int main() {
    int array[5] = {2,6,4,1,9};
    std::cout << "The min number is: " << min_element(array,5) << std::endl;
    return 0;
}