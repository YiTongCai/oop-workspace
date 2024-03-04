#include <iostream>
extern int sum_two_arrays(int [], int [], int);

int main() {
    int array[5] = {1,2,3,4,5};
    int secondarray[5]={6,7,8,9,10};
    std::cout << "The sum is: " << sum_two_arrays(array,secondarray,5) << std::endl;
    return 0;
}