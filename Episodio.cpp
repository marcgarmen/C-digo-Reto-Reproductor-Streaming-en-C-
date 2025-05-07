#include "Episodio.h"
#include <iostream>

using namespace std;

Episodio::Episodio(string titulo, int temporada)
    : titulo(titulo), temporada(temporada), calificacion(0) {
    // Inicializa los miembros de datos "titulo", "temporada" y "calificacion" con los valores proporcionados
}

void Episodio::calificar(float valor) {
    calificacion = valor;
    // Asigna la calificación proporcionada al miembro de datos "calificacion" de la clase Episodio
}

float Episodio::obtenerCalificacion() const {
    return calificacion;
    // Regresa el valor almacenado en el miembro de datos "calificacion" de la clase Episodio
}

void Episodio::mostrar() const {
    cout << "Episodio - Título: " << titulo << ", Temporada: " << temporada << ", Calificación: " << calificacion << endl;
    // Muestra la información del episodio en la consola
}
