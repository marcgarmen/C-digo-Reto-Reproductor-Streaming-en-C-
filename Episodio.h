#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>

using namespace std;

class Episodio {
private:
    string titulo;
    int temporada;
    float calificacion;

public:
    // Constructor de la clase Episodio
    // Se encuentra en el archivo de declaración (.h)
    Episodio(string titulo, int temporada);


    // Método para calificar un episodio
    void calificar(float valor);

    // Método para obtener la calificación del episodio
    float obtenerCalificacion() const;

    // Método para mostrar los detalles del episodio
    void mostrar() const;
};

#endif

