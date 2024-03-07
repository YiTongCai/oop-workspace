#include <iostream>
extern void count_digits(int array[4][4]);

int main() {
    int array[4][4] = {{1,5,3,9},
                       {2,5,4,0},
                       {8,7,4,6},
                       {9,3,1,2}};
    count_digits(array);
    return 0;
}