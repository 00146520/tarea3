#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    float a, b, c, x1, x2;
    cout << "Ingrese el valor de a: "<<endl; cin>>a;
    cout << "Ingrese el valor de b: "<<endl; cin>>b;
    cout << "Ingrese el valor de c: "<<endl; cin>>c;
    x1 = (-b+ sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b- sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<< "El resultado es "<< endl<<x1<<endl<<x2<<endl;
}