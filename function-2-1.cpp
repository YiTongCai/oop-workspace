#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
void print_binary_str(std::string decimal_number){
    int number = std::stoi(decimal_number);
    std::string arr = "";

    if (number < 1){
        std::cout << "0" << std::endl;
    }
     
    while (number >= 1) {
        if (number > 1){
            if (number % 2 != 0){
                arr += "1";
            }
            if (number %2 == 0){
                arr += "0";
            }
        }
        if (number == 1){
            arr += "0";
            arr += "1";
            number = number - 1;
        }

    }
    std::reverse(arr.begin(),arr.end());
    std::cout<<arr<<std::endl;
}