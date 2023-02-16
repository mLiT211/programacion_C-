#include <iostream>
using namespace std;


int main(){
	
	int primer {};
	int segundo {};
	int promedio {};
	int cuadrados {};
	
	cout << "Ingrese el primer numero: ";
	cin >> primer;
	cout << "Ingrese el segundo numero: ";
	cin >> segundo;
	
	if (primer == segundo) 		
	cout << endl << "Num1 = Num2: " << true ;
	else
	cout << endl << "Num1 = Num2: " << false ;
	if (primer > segundo) 
	cout << endl << "Num1 > Num2: " << true;
    else
	cout << endl << "Num1 > Num2: " << false;
	if (primer < segundo)
	cout << endl << "Num1 < Num2: " << true ;
	else
	cout << endl << "Num1 < Num2: " << false ;
	cout << endl << "El promedio es: " << ( primer + segundo ) / 2;
	cout << endl << "La suma de cuadrados es: " << ( primer*primer ) + ( segundo*segundo );
	
	return 0;
}