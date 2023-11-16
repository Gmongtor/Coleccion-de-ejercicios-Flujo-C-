#include <limits>
#include <iostream>
using namespace std;

namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r) : radio(r) {}
        double calcularArea() {
            return 3.14 * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * 3.14 * radio;
        }
    };
}

int main() {
    std::cout << "Introduzca el radio: ";
    double radio;
    std::cin >> radio;
    Geometria::Circulo r(radio);
    std:: cout << "para continuar presione enter" << std::endl;
    cin.get();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Area: " << r.calcularArea() << std::endl;
    std::cout << "Perimetro: " << r.calcularPerimetro() << std::endl;
    std::cout << "Area del semicirculo: " << r.calcularArea() / 2 << std::endl;
    std:: cout << "Perimetro del semicirculo: " << r.calcularPerimetro() / 2 << std::endl;
    return 0;
}