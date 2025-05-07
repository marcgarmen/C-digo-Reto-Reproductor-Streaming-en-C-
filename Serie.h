
#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include "Episodio.h"
#include <vector>

using namespace std;

class Serie : public Video {
public:
    vector<Episodio> episodios; // Vector para almacenar los episodios de la serie

public:
    /**
     * Constructor de la clase Serie
     * id: ID de la serie
     * nombre: Nombre de la serie
     * duracion: Duración de la serie
     * genero: Género de la serie
     */
    Serie(string id, string nombre, int duracion, string genero);

    /**
     * Método para agregar un episodio a la serie
     * episodio: Objeto de la clase Episodio a agregar
     */
    void agregarEpisodio(Episodio episodio);

    /**
     * Método para mostrar la información de la serie
     */
    void mostrar();
};

#endif

