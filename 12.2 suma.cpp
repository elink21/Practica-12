#include <iostream>
#include <locale>
using namespace std;
int funcion(int,int);
int x, y;
string prueba="global";

int main()
{
    char *locale;
    locale=setlocale(LC_ALL, "");
    int resultado;
    cout << "Te encuentras en main(): " << prueba << endl;
    cout << "Ingresa x desde main: ";
    cin >> x;
    cout << "Ingresa y desde main: ";
    cin >> y;
    resultado=funcion(x,y);
    cout << "Te encuentras en main(): " << prueba << endl;
    cout << "x desde main: " << x << endl;
    cout << "y desde main: " << y << endl;
    cout << "El resultado de la suma es: " << resultado << endl;
    return 0;
}

int  funcion(int a, int b)
{
    string prueba = "local";
    cout << "Te encuentras en funcion(): " << prueba << endl;
    cout << "x desde función: " << a << endl;
    cout << "y desde función: " << b << endl;
    return (a+b);
}
