#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string phrase = "Hello, World!";

    // Imprimir la cadena
    std::cout << "La frase es: " << phrase << std::endl;

    // Imprimir el tamaño de la cadena utilizando la función size()
    std::cout << "El tamaño de la cadena es: " << phrase.size() << " caracteres." << std::endl;

    // Comprobar si la cadena está vacía utilizando la función empty()
    if (phrase.empty()) {
        std::cout << "La cadena esta vacia." << std::endl;
    } else {
        std::cout << "La cadena no está vacia." << std::endl;
    }

    return 0;
}
