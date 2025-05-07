#include "Video.h"

using namespace std;

// Constructor de la clase Video
Video::Video(string id, string nombre, int duracion, string genero)
    : id(id), nombre(nombre), duracion(duracion), genero(genero), calificacion(0) {}

// Método para calificar un video
void Video::calificar(float valor) {
    calificaciones.push_back(valor);
}


// Método para obtener la calificación de un video
float Video::obtenerCalificacion() const {
    if (calificaciones.empty()) {
        return 0.0;
    }

    float suma = 0.0;
    for (float calificacion : calificaciones) {
        suma += calificacion;
    }

    return suma / calificaciones.size();
}


// Método abstracto para mostrar los detalles de un video
void Video::mostrar() {
    // Este método  se implementará en las clases derivadas
    // para mostrar los detalles específicos de cada tipo de video
}
