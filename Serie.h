//Series.h
#ifndef _SERIE_H
#define _SERIE_H
#include "Video.h"

class Serie:public Video{
  public:
  Serie();
  Serie(int id1, string nombre1, string duracion1, string genero1, float calificacion1);
  void mostrarInfo()override;
  void ratingPers()override;

};
#endif
