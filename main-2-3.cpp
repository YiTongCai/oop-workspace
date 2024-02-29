#include <iostream>
extern void two_five_nine(int array[], int n);

int main() {
    int array[15] = {1,2,3,4,5,3,5,8,9,5,2,3,9,2,5};
    two_five_nine(array,15);
    return 0;
}