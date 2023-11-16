#include <iostream>
using namespace std;
namespace matematicas {
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        return a / b;
    }
}
int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "La suma es: " << matematicas::suma(a, b) << endl;
    cout << "La resta es: " << matematicas::resta(a, b) << endl;
    cout << "La multiplicacion es: " << matematicas::multiplicacion(a, b) << endl;
    cout << "La division es: " << matematicas::division(a, b) << endl;
    return 0;
}