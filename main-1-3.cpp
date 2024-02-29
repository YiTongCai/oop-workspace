#include <iostream>
extern int num_count(int[], int, int);

int main() {
    int array[10] = {1,2,3,4,5,2,3,4,5,6};
    int number = 2;
    std::cout << "The number count is: " << num_count(array,10,2) << std::endl;
    return 0;
}
