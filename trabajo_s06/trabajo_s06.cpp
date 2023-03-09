#include <iostream>
using namespace std;

int main () {

    int num1;
    int num2;
    int op;
    int rep;

    cout << "Ingrese dos numeros enteros ( separados por un espacio ): ";
    cin >> num1 >> num2;
    cout << "Que desea hacer: " << endl << "1. Sumar" << endl << "2. Restar" << endl << "3. Multiplicar" << endl << "4. Dividir " << endl << "Ingrese el numero correspondiente a la opcion: ";
    cin >> op;

    switch ( op ) {

        case 1:
            cout << endl << "Ha seleccionado la opcion sumar" << endl;
            cout << "La respuesta a la operacion de " << num1 << " + " << num2 << " es igual a: " << num1 + num2;
            break;
        case 2:
            cout << endl << "Ha seleccionado la opcion restar" << endl;
            cout << "La respuesta a la operacion de " << num1 << " - " << num2 << " es igual a: " << num1 - num2;
            break;
        case 3:
            cout << endl << "Ha seleccionado la opcion multiplicar" << endl;
            cout << "La respuesta a la operacion de " << num1 << " * " << num2 << " es igual a: " << num1 * num2;
            break;
        case 4:
            cout << endl << "Ha seleccionado la opcion dividir" << endl;
            cout << "La respuesta a la operacion de " << num1 << " / " << num2 << " es igual a: " << num1 / num2;
            break;
        default:
            cout << endl << "No ha seleccionado una opcion valida";
    }
    

    while ( rep <= 2 ) {
        cout << endl << endl << "-----------Operacion realizada-----------";
        cout << endl << "1. Realizar una operacion distinta con los mismos numeros" << endl << "2. Ingresar nuevos numeros para seguir realizando operaciones" << endl << "3. Salir del programa" << endl << "Ingrese el numero correspondiente a la opcion: ";
        cin >> rep;

        switch ( rep ) {

            case 1:
                cout << "Que desea hacer: " << endl << "1. Sumar" << endl << "2. Restar" << endl << "3. Multiplicar" << endl << "4. Dividir " << endl << "Ingrese el numero correspondiente a la opcion: ";
                cin >> op;

                    switch ( op ) {

                    case 1:
                        cout << endl << "Ha seleccionado la opcion sumar" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " + " << num2 << " es igual a: " << num1 + num2;
                        break;
                    case 2:
                        cout << endl << "Ha seleccionado la opcion restar" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " - " << num2 << " es igual a: " << num1 - num2;
                        break;
                    case 3:
                        cout << endl << "Ha seleccionado la opcion multiplicar" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " * " << num2 << " es igual a: " << num1 * num2;
                        break;
                    case 4:
                        cout << endl << "Ha seleccionado la opcion dividir" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " / " << num2 << " es igual a: " << num1 / num2;
                        break;
                    default:
                        cout << endl << "No ha seleccionado una opcion valida";
                }
                break;
            case 2:
                cout << "Ingrese dos numeros enteros ( separados por un espacio ): ";
                cin >> num1 >> num2;
                cout << "Que desea hacer: " << endl << "1. Sumar" << endl << "2. Restar" << endl << "3. Multiplicar" << endl << "4. Dividir " << endl << "Ingrese el numero correspondiente a la opcion: ";
                cin >> op;

                    switch ( op ) {

                    case 1:
                        cout << endl << "Ha seleccionado la opcion sumar" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " + " << num2 << " es igual a: " << num1 + num2;
                        break;
                    case 2:
                        cout << endl << "Ha seleccionado la opcion restar" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " - " << num2 << " es igual a: " << num1 - num2;
                        break;
                    case 3:
                        cout << endl << "Ha seleccionado la opcion multiplicar" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " * " << num2 << " es igual a: " << num1 * num2;
                        break;
                    case 4:
                        cout << endl << "Ha seleccionado la opcion dividir" << endl;
                        cout << "La respuesta a la operacion de " << num1 << " / " << num2 << " es igual a: " << num1 / num2;
                        break;
                    default:
                        cout << endl << "No ha seleccionado una opcion valida";
                }
                break;
            case 3:
                cout << "Gracias por usar el programa. Adios :)";
                break;
            default:
                cout << endl << "No ha seleccionado una opcion valida";
        }
   }
    return 0;
}