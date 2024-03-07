#include <iostream>
extern bool is_palindrome(int integers[], int);
extern int sum_array_elements(int integers[], int);
extern int sum_if_palindrome(int integers[], int);

int main() {
    int integers[10]={1,2,3,4,5,5,4,3,2,1};
    int length = 10;
    std::cout<<"the answer is :"<<is_palindrome(integers,length)<<std::endl;
    std::cout<<"the answer is :"<<sum_array_elements(integers,length)<<std::endl;
    std::cout<<"the answer is :"<<sum_if_palindrome(integers,length)<<std::endl;
    return 0;
}