#include <iostream>
using namespace std;

int main() {

    const double precio_habitacion_pequena {45.8};
    const double precio_habitacion_grande {58.3};
	const double impuesto {0.12};
    int numero_habitaciones {0};
    int numero_pequenas {0};
    int numero_grandes {0};

	cout << "-------Bienvenidos al sistema de limpieza de habitaciones--------";
    cout << endl << endl << "Por favor ingrese el numero total de habitaciones que desea limpiar: ";
    cin >> numero_habitaciones;
    cout << "Cuantas habitaciones pequenas se van a limpiar: ";
    cin >> numero_pequenas;
    cout << "Cuantas habitaciones grandes se van a limpiar: ";
    cin >> numero_grandes;


	double precio { ( numero_pequenas * precio_habitacion_pequena ) + ( numero_grandes * precio_habitacion_grande ) };
    cout << endl << endl << "-------Cotizacion-------";
    cout << endl << endl << "Cantidad de habitaciones: " << numero_habitaciones;
    cout << endl << "El precio sin impuestos a pagar es: $" << precio;
    cout << endl << "El impuesto a pagar es: $" << precio * impuesto;
	cout << endl << "El precio total a pagar es: $" << precio * (impuesto + 1);
	
    return 0;
}