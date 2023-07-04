#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Alumno {
    string nombre;
    string apellido;
    vector<int> notas;
};

void mostrarMenu() {
    cout << "Menu:\n";
    cout << "1) Ingresar nombre y apellido del estudiante\n";
    cout << "2) Ingresar las notas de 3 cursos\n";
    cout << "3) Visualizacion de las notas individuales\n";
    cout << "4) Promedio general de las notas\n";
    cout << "5) Salir\n";
}

void ingresarNombreApellido(Alumno& alumno) {
    cout << "Ingrese el nombre del estudiante: ";
    cin.ignore();
    getline(cin, alumno.nombre);
    cout << "Ingrese el apellido del estudiante: ";
    getline(cin, alumno.apellido);
}

void ingresarNotas(Alumno& alumno) {
    cout << "Ingrese las notas de los 3 cursos:\n";
    for (int i = 0; i < 3; i++) {
        int nota;
        cout << "Curso " << i + 1 << ": ";
        cin >> nota;
        alumno.notas.push_back(nota);
    }
}

void mostrarNotasIndividuales(const Alumno& alumno) {
    cout << "Notas individuales de " << alumno.nombre << " " << alumno.apellido << ":\n";
    for (int i = 0; i < 3; i++) {
        cout << "Curso " << i + 1 << ": " << alumno.notas[i] << endl;
    }
}

double calcularPromedio(const Alumno& alumno) {
    double suma = 0.0;
    for (int i = 0; i < alumno.notas.size(); i++) {
        suma += alumno.notas[i];
    }
    return suma / alumno.notas.size();
}

int main() {
    Alumno alumno;
    int opcion;

    do {
        mostrarMenu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                ingresarNombreApellido(alumno);
                break;
            case 2:
                ingresarNotas(alumno);
                break;
            case 3:
                mostrarNotasIndividuales(alumno);
                break;
            case 4:
                cout << "Promedio general de las notas: " << calcularPromedio(alumno) << endl;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Por favor, intente de nuevo." << endl;
        }

        cout << endl;
    } while (opcion != 5);

    return 0;}
