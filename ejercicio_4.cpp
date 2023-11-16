#include <limits>
#include <iostream>
using namespace std;
namespace Ciencia {
    namespace Fisica {
        double masa;
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
    namespace matematicas {
        double radio;
        const double pi = 3.14;
        double calcularAreaCirculo(double radio) {
            return pi * radio * radio;
        }
    }
    namespace quimica {
        double masaElectron;
        const double c = 299792458;
        const double masaElectron = 9.10938356e-31;
        double calcularEnergia(double masa) {
            return masa * masaElectron * c * c;
        }



    }

}

int main() {

    std::cout << "Introduzca el radio: ";
    double radio;
    std::cin >> radio;
    Ciencia::matematicas radio(radio);

    std::cout << "Introduzca la masa: ";
    double masa;
    std::cin >> masa;
    Ciencia::Fisica masa(masa);

    std::cout << "Introduzca la masa del electron: ";
    double masaElectron;
    std::cin >> masaElectron;
    Ciencia::quimica masaElectron(masaElectron);

    std::cout << "para continuar presione enter" << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get;
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia() << std::endl;
    std::cout << "Area del circulo: " << Ciencia::matematicas::calcularAreaCirculo << std::endl;
    std::cout << "Energia de electron: " << Ciencia::quimica::calcularEnergia() << std::endl;

}

