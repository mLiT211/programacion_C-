#include <iostream>
using namespace std;

int main () {

    int opcion;
    int fila;
    int columna;
    char simbolo = ' * ';

    cout << "Elija una opcion: " << endl << " 1. Cuadrado lleno mitad izquierda " << endl << " 2. Rectangulo lleno mitad arriba " << endl << " 3. Triangulo llena esquina abajo izquierda " << endl << " 4. Sorpresa" << endl << " 5. Salir " << endl;
    cin >> opcion;

    switch ( opcion ) {

        case 1: 
            cout << "Opcion: " << opcion << endl;
            cout << "Ingrese la cantidad de filas de su figura: ";
            cin >> fila;
            
            for ( int j = 0; j < fila; ++j ) {
                for ( int i = 0; i < fila; ++i) {
                cout << " *";
                }
            cout << endl;
            }
        cout << endl;
            break;
        case 2:
            cout << "Opcion: " << opcion << endl;
            cout << "Ingrese la cantidad de filas de su figura: ";
            cin >> fila;
            cout << "Ingrese la cantidad de columnas de su figura: ";
            cin >> columna;
            int j, i;
            
            for ( i = 0 ; i < fila; i = i + 1 ) {
                for ( j = 0; j < columna; j = j + 1 )
            cout << " *";
            cout << endl;
            }
            break;
        case 3:
            cout << "Opcion: " << opcion << endl;
            cout << "Ingrese la cantidad de filas de su figura: ";
            cin >> fila;
            
            break;
        case 4:
            cout << "Opcion: " << opcion << endl;
            cout << "Ingrese la cantidad de filas de su figura: ";
            cin >> fila;
             
            break;
        case 5:
            cout << "Gracias, Fin";
            return 0;
            break;
        default:
            cout << "Opcion invalida";
    }

    return 0;
}