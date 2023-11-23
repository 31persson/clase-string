#include <iostream>
#include <string>

int main() {
    // Usar un mensaje más descriptivo para la cadena original
    std::string textoOriginal = "Inteligencia Artificial";

    // Obtener una subcadena usando substr()
    std::string subcadena = textoOriginal.substr(13, 10); // "Artificial"

    // Insertar una nueva cadena al principio usando insert()
    std::string nuevaCadena = textoOriginal.insert(0, "La "); // "La Inteligencia Artificial"

    // Imprimir la subcadena y la cadena resultante
    std::cout << "Subcadena: " << subcadena << std::endl;
    std::cout << "Cadena resultante: " << nuevaCadena << std::endl;

    return 0;
}
