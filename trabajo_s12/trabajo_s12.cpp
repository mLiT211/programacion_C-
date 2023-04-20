#include <iostream>
using namespace std;

int main () {

    int arreglo[ 5 ];
    int menor;

    for ( int i = 0; i < 5; i++ ) {
        cout << "Ingrese numero en la posicion " << i << ": ";  
        cin >> arreglo[ i ];
    }
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = i+1; j < 5; j++) {
            if ( arreglo[ i ] > arreglo [ j ] )
                menor = arreglo[ i ];
                arreglo[ i ] = arreglo[ j ];
                arreglo[ j ] = menor;
        }
    }

    cout << "El arreglo ordenado de menor a mayor es: ";
    for ( int i = 0; i < 5; i++ ) {
        cout << arreglo[ i ] << ",";
    }

    return 0;
}