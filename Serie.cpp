#include "Serie.h"
#include <iostream>

using namespace std;

Serie::Serie(string id, string nombre, int duracion, string genero)
    : Video(id, nombre, duracion, genero) {
    // Constructor de la clase Serie
}

void Serie::agregarEpisodio(Episodio episodio) {
    episodios.push_back(episodio);
    // Agrega un episodio a la serie
}

void Serie::mostrar() {
    cout << "Serie - ID: " << id << ", Nombre: " << nombre << ", Duración: " << duracion << " min, Género: " << genero << ", Calificación: " << obtenerCalificacion() << endl;
    cout << "Episodios:" << endl;
    for (const auto& episodio : episodios) {
        episodio.mostrar();
    }
}

        // Muestra la información de la serie y los episodios asociados


