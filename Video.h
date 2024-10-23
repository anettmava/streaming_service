//Video.h
#include <iostream>
using namespace std;
#ifndef _VIDEO_H_
#define _VIDEO_H_

class Video{
  private:
string nombre;
string genero;
string duracion;
int id;
float rating;
float ratingAct;


  public:
  Video();
  Video(int, string, string, string, float);
  int getId();
  string getNombre();

  string getDuracion();

  string getGenero();

  float getRating();

  float *ptrRating;

  float getRatingAct();

  void setRatingAct();

  virtual void mostrarInfo();

  virtual void ratingPers();


 //sobrecarga de operadores
bool operator>(Video& otro);
};
#endif
