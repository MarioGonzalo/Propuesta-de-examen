#include <iostream>
#include <cmath>

int main() {
    int a = 0;
    int b = 0;
    int c;
    bool triplePitagorico = false;
    for (int i = 0; i < 20; ++i) {
        a++;
        for (int j = 0; j < 1; ++j) {
            b++;
            std::string pot = std::to_string(sqrt(pow(a,2) + pow(b,2)));
            if (pot.find(".") == false ) {
                c = sqrt(pow(a, 2) + pow(b, 2));
                std::cout << a << "\n" << b << "\n" << c << std::endl;
            } else {
                continue;
            }
        }
    }
}
