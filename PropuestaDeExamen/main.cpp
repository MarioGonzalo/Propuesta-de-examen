#include <iostream>
#include <cmath>

int main() {
    //Se declaran los números con los que vamos a tarabajar
    int a = 0; // a (cateto 1)
    int b = 0; // b (cateto 2)
    int c; //c (hipotenusa)
    int opc = 1;
    for (int i = 0; i < 8; ++i) {
        b=0;
        a ++;
        for (int j = 0; j < 15; ++j) {
            b++;
            std::string pot = std::to_string(sqrt(pow(a,2) + pow(b,2)));
            if (pot.find(".000") != std::string::npos ) {
                c = sqrt(pow(a, 2) + pow(b, 2));
                if((a+b)>c && (b+c) >a && (a+c) > b){
                    std::cout << "Opción número " << opc << "\n"
                    << "a: " << a << "\n"
                    << "b: " << b << "\n"
                    << "c: " << c
                    <<std::endl;
                    opc ++;
                    continue;
                } else {
                    std::cout << "Falso positivo" << std::endl;
                    return 0;
                }
            } else {
                continue;
            }
        }
    }
}
