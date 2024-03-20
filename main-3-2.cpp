#include <iostream>
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main(){
    int *numbers1 = readNumbers();
    int *numbers2 = reverseArray(numbers1,7);
    equalsArray(numbers1,numbers2,7);
    std::cout << "The result is : " << equalsArray(numbers1,numbers2,7) << std::endl;
    delete[] numbers1;
    delete[] numbers2;
    return 0;
}