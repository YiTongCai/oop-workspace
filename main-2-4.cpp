#include <iostream>
extern int array_min(int integers[], int);
extern int array_max(int integers[], int);
extern int sum_min_max(int integers[], int);

int main() {
    int test[] = {1,2,3,4,5,6,7,8,9,0};
    int length = 10;
    std::cout << "the min is :"<< array_min(test,length) <<std::endl;
    std::cout << "the max is :"<< array_max(test,length) <<std::endl;
    std::cout << "the sum is :"<< sum_min_max(test,length) <<std::endl;
    return 0;
}