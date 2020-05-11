#include "iostream"
using namespace std;
int main()
{
    int a, resultado = 0;
string nombre = "Laptop";
string precio = " $286";
cout <<endl<< nombre << precio << endl;
cout << "cuantas unidades desea pedir? "<<endl; cin>>a;
resultado = 286*a;
cout << nombre << precio <<endl;
cout << "Su total es: $"<<resultado<<endl;
}