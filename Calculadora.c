#include<iostream>
using namespace std;

int main() {
	int x,y;
	int suma, resta, multiplicacion, divicion;
	
	cout<<"introduce el primer numero"<<endl;
	cin>>x;
	cout<<"introduce el segundo numero"<<endl;
	cin>> y;
	
	suma = x+y;
	resta = x-y;
	multiplicacion = x*y;
	divicion = x/y;
	
	
	cout<<"Resultados:"<<endl;
	cout<<"Resultado Suma:"<<suma<<endl;
	cout<<"Resultado Resta:"<<resta<<endl;
	cout<<"Resultado Multiplicacion:"<<multiplicacion<<endl;
	cout<<"Resultado Divicion:"<<divicion<<endl;
	
	return 0;
}
