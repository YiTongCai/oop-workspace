#include <iostream>
extern int median_array(int[], int);

int main() {
    int array[5] = {2,9,3,7,5};
    std::cout << "The answer is: " << median_array(array,5) << std::endl;
    return 0;
}