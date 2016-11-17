#include <iostream>
#include <locale>
using namespace std;


float triangleArea(float width,float height)
{
	return (width*height)/2;
}
float rectangleArea(float width,float height){return width*height;}

int main()
{
	char another='Y';
	int subMenu;
	float width,height;
	while(another=='Y')
	{
		cout<<"Areas disponibles: 1.-Rectangulo  2.-Triangulo\n";
		cout<<"Inserte la opcion para area: ";
		cin>>subMenu;
		cout<<"Inserte la base: ";
		cin>>width;
		cout<<"Inserte la altura: ";
		cin>>height;
		switch(subMenu)
		{
			case 1:
				cout<<"El area es: "<<rectangleArea(height,width)<<"\n";
			break;
			case 2:
				cout<<"El area es: "<<triangleArea(height,width)<<"\n";
				break;
			default: cout<<"No se inserto una opcion valida";
		}
		cout<<"Desea realizar otra prueba (Y/N)?";
		cin>>another;
	}

	return 0;
}
