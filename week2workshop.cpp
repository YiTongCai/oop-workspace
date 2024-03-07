#include <iostream>
#include <string>
using namespace std;
string transform(int number){
    std::string arr = "";

    if (number < 1){
        return 0;
    }

    
     
    while (number >= 1) {
        if (number > 1){
            if (number % 2 != 0){
                arr += std::to_string(1);
            }
            if (number %2 == 0){
                arr += std::to_string(0);
            }
        }
        if (number == 1){
            arr += std::to_string(0);
            arr += std::to_string(1);
            number = number - 1;
        }

    }
    std::reverse(arr.begin(),arr.end());
    return arr;
}


int main(){
    std::string binary = transform(72);
    std::cout << "The answer: "<< binary << std::endl;
    return 0;
}

