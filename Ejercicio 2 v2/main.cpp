#include <iostream>
#include "circulo.h"
#include "triangulo.h"
using namespace std;
using namespace Geometria;
int main(){
    cout << "Area del circulo: " << calcularAreaCirculo(5) << endl;
    cout << "Area del triangulo: " << calcularAreaTriangulo(5, 3) << endl;
    return 0;
}