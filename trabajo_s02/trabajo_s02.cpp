#include <iostream>
using namespace std;

int main() {
    
    int largo;
    int ancho;

    cout << "Ingresa el largo de la habitacion en metros: ";
    cin >> largo;
    cout << "Ingresa el ancho de la habitacion en metros: ";
    cin >> ancho;
    cout << endl << "El area de la habitacion en metros es: " << largo * ancho;
    
    return 0;
}