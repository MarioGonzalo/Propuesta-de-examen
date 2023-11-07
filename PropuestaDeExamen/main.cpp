#include <iostream>
#include <cmath>

int main() {
    //Se declaran los números con los que vamos a tarabajar
    int a = 0; // a (cateto 1)
    int b; // b (cateto 2)
    int c; //c (hipotenusa)
    //Int para contar el número de opciones posibles
    int opc = 1;
    //Bucle for para incremetar el valor de a
    for (int i = 0; i < 8; ++i) {
        b=0; //b se cambia a 0 cada vez que se completa el bucle de abajo
        a++; //Se aumenta el valor de a
        //Bucle for para incrrementar el valor de b
        for (int j = 0; j < 15; ++j) {
            b++;//Se aumenta el valor de b
            std::string pot = std::to_string(sqrt(pow(a,2) + pow(b,2)));//Se cambia la operación de c para poder confirmar que es un número entero
            //Se confirma que pot es un número entero
            if (pot.find(".000") != std::string::npos) {
                c = sqrt(pow(a, 2) + pow(b, 2));//Se asigna el valor a ce de la raíz cuadrada de la suma de los cuadrados de los números
                //Se confirma que la suma de cualquier par de lados es mayor que el tercer lado
                if((a+b)>c && (b+c) >a && (a+c) > b){
                    //Se imprimen los números
                    std::cout << "Opción número " << opc << "\n"
                    << "a: " << a << "\n"
                    << "b: " << b << "\n"
                    << "c: " << c
                    <<std::endl;
                    opc ++;//Se suma 1 a opc para que a la siguiente repetición sea una opcióm mayor
                    continue; //Se continúa el bucle
                } else {
                    std::cout << "Falso positivo" << std::endl; //Si la condición no se cumple se escribe este texto
                    return 0; //Y se termina el proceso
                }
            } else {
                continue;//Si la raiz no es entera se continúa el bucle
            }
        }
    }
}
