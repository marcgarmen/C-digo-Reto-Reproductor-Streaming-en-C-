#ifndef VIDEO_H
#define VIDEO_H
#include <vector>


#include <string>

using namespace std;

class Video {
public:
    string id;
    string nombre;
    int duracion;
    string genero;
    float calificacion;
vector<float> calificaciones; // Vector para almacenar las calificaciones del video

public:
    // Constructor de la clase Video
    // Se encuentra en el archivo de declaración (.h)
    Video(string id, string nombre, int duracion, string genero);

  

    // Método virtual puro para mostrar los detalles del video
    // Como es un método virtual puro, no tiene implementación en la clase base
    virtual void mostrar() = 0;

    // Método para calificar un video
    void calificar(float valor);

    // Método para obtener la calificación del video
    float obtenerCalificacion() const;
};

#endif

