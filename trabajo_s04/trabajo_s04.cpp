#include <iostream>
using namespace std;

int main () {

    //int numero1;
    //int numero2;
    //int numero3;

    //cout << "-------------Los numeros ingresados deben ser positivos, enteros y distintos------------";
    //cout << endl << endl << "Ingrese el primer numero entero: ";
    //cin >> numero1;
    //cout << "Ingrese el segundo numero entero: ";
    //cin >> numero2;
    //cout << "Ingrese el ultimo numero entero: ";
    //cin >> numero3;

    //if ( numero1 > numero2 and numero1 > numero3 ) 
    //cout << "El mayor de los tres numeros es: " << numero1;
    //if ( numero2 > numero1 and numero2 > numero3 ) 
    //cout << "El mayor de los tres numeros es: " << numero2;
    //if ( numero3 > numero2 and numero3 > numero1 ) 
    //cout << "El mayor de los tres numeros es: " << numero3;


    cout << "-------------Los numeros ingresados deben ser positivos, enteros y distintos------------";
    cout << endl << endl << "Por favor ingrese los tres numeros solicitados: ";
	int a , b, c;
	cin >> a >> b >> c;
	if ( a > b and a > c ) 
    cout << "El mayor de los tres numeros es: " << a;
    if ( b > a and b > c ) 
    cout << "El mayor de los tres numeros es: " << b;
    if ( c > b and b > a ) 
    cout << "El mayor de los tres numeros es: " << c;

    return 0;
}


    
