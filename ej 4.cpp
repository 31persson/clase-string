#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string miCadena = "Hola, mundo!";

    // Utilizar la función find() para buscar una subcadena
    std::size_t indice = miCadena.find("mundo");

    // Imprimir el índice de inicio de la subcadena
    if (indice != std::string::npos) {
        std::cout << "La subcadena 'mundo' comienza en el indice: " << indice << std::endl;
    } else {
        std::cout << "La subcadena 'mundo' no fue encontrada." << std::endl;
    }

    // Utilizar la función replace() para reemplazar la subcadena
    std::string nuevaSubcadena = "amigo";
    miCadena.replace(indice, 5, nuevaSubcadena);

    // Imprimir la cadena resultante
    std::cout << "La cadena resultante es: " << miCadena << std::endl;

    return 0;
}
