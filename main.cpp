#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "windows.h"

using namespace std;
void crearArchivos(int cantidad);
void agregarTexto();

int main() {
    int cantidad;
    cout<<"Cuantos archivos desea crear";
    cin>>cantidad;
    crearArchivos(cantidad);
}
void crearArchivos(int cantidad){//Funcion 1. de la serie 2 del parcial 2
    string nombreArchivo = "documento";
    if (cantidad % 2 == 0){
        cout << "Cantidad de Archivos par" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/Junior/Desktop/Par/" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i+1; ++j) {
                file << "Texto de prueba" << endl;
            }
            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
    }else{
        cout << "Cantidad de Archivos impar" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/Junior/Desktop/Impar/" + nombreArchivo + to_string(i + 1) + ".txt");
            agregarTexto();
            for (int j = 0; j < i+1; ++j) {
                file << "Texto de prueba" << endl;
            }
            file.close();
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
    }
}

void agregarTexto(){//Funcion 2. de la serie 2 del parcial 2
    cout << "Agregando texto..." << endl;
}
