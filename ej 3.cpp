#include <iostream>
#include <string>

int main() {
    // Crear dos cadenas utilizando la clase string
    std::string cadena1 = "Mi nombre es ";
    std::string cadena2 = "Jaime";

    // Utilizar el operador '+' para concatenar las dos cadenas
    std::string cadena_resultante = cadena1 + cadena2;

    // Imprimir la cadena resultante
    std::cout << "La cadena resultante es: " << cadena_resultante << std::endl;

    return 0;
}
