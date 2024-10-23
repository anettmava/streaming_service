//Pelicula.h
#ifndef _PELICULA_H
#define _PELICULA_H
#include "Video.h"

class Pelicula:public Video{
  public:
  Pelicula();
  Pelicula(int id1, string nombre1, string duracion1, string genero1, float calificacion1);
  void mostrarInfo()override;
  void ratingPers()override;

};
#endif