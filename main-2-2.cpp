#include <iostream>
extern int max_element(int[], int);

int main() {
    int array[5] = {3,7,8,2,5};
    std::cout << "The min number is: " << max_element(array,5) << std::endl;
    return 0;
}