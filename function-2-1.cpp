#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
void print_binary_str(std::string decimal_number){
    int number = std::stoi(decimal_number);
    std::string arr = "";

    if (number == 0){
        arr = "0";
    }

    while (number > 0) {
        arr += std::to_string(number%2);
        number = number / 2;
    }
    
    std::reverse(arr.begin(),arr.end());
    std::cout<<arr<<std::endl;
}