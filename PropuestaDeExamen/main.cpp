#include <iostream>
#include <cmath>

int main() {
    int a = 0;
    int b = 0;
    int c;
    bool triplePitagorico = false;
    while(!triplePitagorico){
        a++;
        while(!triplePitagorico){
            b++;
            if (sqrt(pow(a,2) + pow(b,2))) {
                c = sqrt(pow(a, 2) + pow(b, 2));
                std::cout << c << std::endl;
                triplePitagorico = true;
            }
        }
    }
}
