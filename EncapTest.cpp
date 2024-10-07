#include <iostream>
#include <vector>
#include <string>

int main(int argc, const char* argv[]) {
        std::string Hold;
        std::vector<std::string> ExArray;
    while (true) {
        std::cin >> Hold;

        ExArray.push_back(Hold);
        for (int i = 0; i < ExArray.size(); i++) {
            std::cout << "________" << std::endl << ExArray[i] << std::endl;
        }
    }
}
 