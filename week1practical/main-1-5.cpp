#include <iostream>
extern int count_evens(int);

int main() {
    int number = 10;
    std::cout << "The number count is: " << count_evens(10) << std::endl;
    return 0;
}