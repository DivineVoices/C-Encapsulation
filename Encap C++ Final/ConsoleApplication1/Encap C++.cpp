#include <iostream>
#include <vector>
#include <string>
#include "Testing.h"

std::stringstream StringToConvert;

std::cout << "Enter x : ";
std::cin >> x;
std::cout << "Enter y : ";
std::cin >> y;
std::cout << "Enter z : ";
std::cin >> z;

StringToConvert << "Point : x :" << x << ", y :" << x << ", z :" << z;

std::string result = StringToConvert.str();

std::cout << result;


int main(int argc, const char* argv[]) {

    Point Random;
    std::cout << Random.ToString();

    /*std::string Hold;
    std::vector<std::string>* ExArray = new std::vector<std::string>;
    while (true) {
        std::cin >> Hold;

        ExArray->push_back(Hold);
        for (int i = 0; i < ExArray->size(); i++) {
            std::cout << (*ExArray)[i] << " " << std::endl;
        }
    }*/
}