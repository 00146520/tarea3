#include "iostream"
using namespace std;
int main()
{
    float a, b, c, resultado = 0;
    cout << "Ingrese la primera nota: " << endl; cin >> a;
    cout << "Ingrese la segunda nota: " << endl; cin >> b;
    cout << "Ingrese la tercer nota: " << endl; cin >> c;
    resultado = (a+b+c)/3;
    cout << "Su promedio es: " <<resultado << endl;
}