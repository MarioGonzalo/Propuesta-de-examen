#include <iostream>
#include <cmath>

int main() {
    //Se declaran los números con los que vamos a tarabajar
    int a = 0; // a (cateto 1)
    int b = 0; // b (cateto 2)
    int c; //c (hipotenusa)
    for (int i = 0; i < 20; ++i) {
        b=0;
        a ++;
        for (int j = 0; j < 20; ++j) {
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
