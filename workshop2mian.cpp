#include <iostream>
#include <string>
#include <cmath>
using namespace std;
extern string transform(int number);

int binary(std::string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        ++power;
    }
    return decimal;
}

string add(string binary1, string binary2) {
    int decimal1 = binary(binary1);
    int decimal2 = binary(binary2);
    int add = decimal1 + decimal2;
    return transform(add);
}

string substract(string binary1, string binary2) {
    int decimal1 = binary(binary1);
    int decimal2 = binary(binary2);
    int sub = decimal1 + decimal2;
    return transform(sub);
}

string left(string binary1, int shift) {
    int decimal = binary(binary1);
    decimal = decimal >> shift;
    return transform(decimal);
}

string right(string binary1, int shift) {
    int decimal = binary(binary1);
    decimal = decimal << shift;
    return transform(decimal);
}

int main() {
    string binary1 = "11010011";
    string binary2 = "10011101";
    std::cout << "Add: " << add(binary1, binary2) << std::endl;
    std::cout << "Substract: " << substract(binary1, binary2) << std::endl;
    std::cout << "Left Shift: " << left(binary1, 3) << std::endl;
    std::cout << "Right Shift: " << right(binary1, 3) << std::endl;
    return 0;
}