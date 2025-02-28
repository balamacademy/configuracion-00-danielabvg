#include <iostream>

int main(int argc, char **argv) {
    std::string nombre = "Juan";
    int edad = 34;
    std::cin >> nombre;
    std::cin >> edad;
    std::cout << "El nombre es "<< (nombre) << " de edad "<< (edad);
    return 0;
}

