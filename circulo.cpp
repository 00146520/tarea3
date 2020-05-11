#include "iostream"
#include "math.h"
#ifndef MPI
#define M_PI 3.14159265358979323846
#endif
using namespace std;
int main()
{
    //area = pi * r^2
    //perimetro = 2 * pi * r
    // potencia = pow
   float r, a, p, resultado = 0;
   cout << "Ingrese el radio: " << endl; cin >> r;
   a = M_PI * pow(r,2);
   p = 2*M_PI*r;
   cout << "Su area es: "<<a<<endl;
   cout << "Su perimetro es: "<<p<<endl;




}