#include <iostream>
using namespace std;

int main () {

    int kelvin;
    int celcius;
    int fahrenheit;
    int opcion;

    cout << "Elija una de las siguientes opciones: " << endl << "1. Celsius to Fahrenheit " << endl << "2. Celsius to Kelvin " << endl << "3. Fahrenheit to Celcius " << endl << "4. Fahrenheit to Kelvin " << endl << "5. Kelvin to Celcius " << endl << "6. Kelvin to Fahrenheit " << endl;
    cin >> opcion;
    cout <<"La opcion seleccionada es la numero: " << opcion;

    switch ( opcion ) {

        case 1:
            cout << endl << "Ingrese la cantidad de grados celcius que desea convertir: ";
            cin >> celcius;
            cout << "Celsius to Fahrenheit: " << ( ( celcius * 1.8 ) + 32 );
            break;
        case 2:
            cout << endl << "Ingrese la cantidad de grados celcius que desea convertir: ";
            cin >> celcius;
            cout << "Celsius to Kelvin: " << ( celcius + 273.15 );
            break;
        case 3:
            cout << endl << "Ingrese la cantidad de grados fahrenheit que desea convertir: ";
            cin >> fahrenheit;
            cout << "Fahrenheit to Celcius: " << ( ( fahrenheit - 32 ) * ( 0.556 ) );
            break;
        case 4:
            cout << endl << "Ingrese la cantidad de grados fahrenheit que desea convertir: ";
            cin >> fahrenheit;
            cout << "Fahrenheit to Kelvin: " << ( ( fahrenheit - 32 ) * ( 0.556 ) + 273.5 ) ;
            break;
        case 5:
            cout << endl << "Ingrese la cantidad de grados kelvin que desea convertir: ";
            cin >> kelvin;
            cout << "Kelvin to Celcius: " << ( kelvin - 273.5 );
            break;
        case 6:
            cout << endl << "Ingrese la cantidad de grados kelvin que desea convertir: ";
            cin >> kelvin;
            cout << "Kelvin to Fahrenheit: " << ( ( kelvin - 273.5 ) * ( 1.8 ) + 32 );
            break;
        default:
            cout << endl << "La opcion ingresada no es correcta";
            return 0;
            break;
    }
    
    return 0;
}