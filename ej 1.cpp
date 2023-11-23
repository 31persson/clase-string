#include <iostream>
#include <string>

int main() {
    // Declarar una variable de tipo string para representar la frase
    std::string frase;

    // Pedir al usuario que ingrese una frase
    std::cout << "Ingresa una frase: ";
    std::getline(std::cin, frase);

    // Imprimir la frase en la consola
    std::cout << "La frase que ingresaste es: " << frase << std::endl;

    return 0;
}
