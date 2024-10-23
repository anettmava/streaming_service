//Capitulo.h
#ifndef _CAPITULO_H
#define _CAPITULO_H
#include "Serie.h"

class Capitulo:public Serie{
  private:
  int temporada;

  public:
  Capitulo();
  Capitulo(int id1, string nombre1, string duracion1, string genero1, float calificacion1, int temporada1);
  int getTemporada();
  void mostrarInfo() override;
  void ratingPers()override;


};
#endif
