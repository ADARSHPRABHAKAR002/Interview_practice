#include <iostream>
#include <string>

std::string decimalToBinary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal = 10;
    std::string binary = decimalToBinary(decimal);
    std::cout << "Binary representation of " << decimal << ": " << binary << std::endl;
    return 0;
}