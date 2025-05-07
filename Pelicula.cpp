#include "Pelicula.h"
#include <iostream>

using namespace std;

Pelicula::Pelicula(string id, string nombre, int duracion, string genero, float calificacion)
    : Video(id, nombre, duracion, genero) {
    this->calificacion = calificacion;
    // Asigna la calificación proporcionada al miembro de datos "calificacion" de la clase Pelicula
}

void Pelicula::mostrar() {
    cout << "Película - ID: " << id << ", Nombre: " << nombre << ", Duración: " << duracion << " min, Género: " << genero << ", Calificación: " << obtenerCalificacion() << endl;
}
    // Muestra la información de la película en la consola

