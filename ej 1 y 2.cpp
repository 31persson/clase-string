#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string phrase = "Hello, World!";

    // Imprimir la cadena
    std::cout << "La frase es: " << phrase << std::endl;

    // Imprimir el tamaño de la cadena utilizando la función size()
    std::cout << "El tamaño de la cadena es: " << phrase.size() << " caracteres." << std::endl;

    // Preguntar si la cadena está vacía y mostrar la respuesta
    std::cout << "La cadena esta vacia? " << (phrase.empty() ? "Si" : "No") << std::endl;

    return 0;
}
