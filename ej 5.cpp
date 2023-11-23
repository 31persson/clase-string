#include <iostream>
#include <string>

int main() {
    // Crear una cadena utilizando la clase string
    std::string miCadena = "Hola, mundo!";

    // Utilizar la función substr() para obtener una subcadena
    std::string subcadena = miCadena.substr(0, 5);  // Obtiene los primeros 5 caracteres

    // Utilizar la función insert() para insertar otra cadena en la cadena
    std::string nuevaCadena = " Querido";
    miCadena.insert(5, nuevaCadena);  // Inserta la nueva cadena después del quinto carácter

    // Imprimir la cadena resultante
    std::cout << "La cadena resultante es: " << miCadena << std::endl;

    return 0;
}
