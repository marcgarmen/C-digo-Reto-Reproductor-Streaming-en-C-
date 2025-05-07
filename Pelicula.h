#ifndef PELICULA_H
#define PELICULA_H

#include "Video.h"

using namespace std;

class Pelicula : public Video {
public:
    Pelicula(string id, string nombre, int duracion, string genero, float calificacion);
    // Constructor de la clase Pelicula

    void mostrar();
    // Método para mostrar la información de la película
};

#endif

