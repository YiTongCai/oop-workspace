#include <iostream>
extern bool is_fanarray(int[], int);

int main() {
    int array1[5] = {1,2,3,2,1};
    int array2[5] = {5,4,3,2,1};
    std::cout << "The answer is: " << is_fanarray(array1,5) << std::endl;
    std::cout << "The answer is: " << is_fanarray(array2,5) << std::endl;
    return 0;
}