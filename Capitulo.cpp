//Capitulo.cpp
#include "Capitulo.h"

Capitulo::Capitulo(){
  temporada = 0;
}

Capitulo::Capitulo(int id1, string nombre1, string duracion1, string genero1, float calificacion1, int temporada1):Serie(id1, nombre1, duracion1, genero1, calificacion1){
  temporada=temporada1;
}

int Capitulo::getTemporada(){
  return temporada;
}
void Capitulo::mostrarInfo (){
  cout << "\n Datos del capitulo seleccionado: \n" << endl << "Id: " << getId() << endl << "Nombre: " << getNombre() << endl << "Duración: " << getDuracion() << endl << "Temporada: " << getTemporada() << endl << "Calificación: " << getRating() << endl;
}

void Capitulo::ratingPers(){
  cout << "Ingresa las estrellas (escala 0-5) para el capitulo: " << getNombre() << endl << endl;
  setRatingAct();
  while (getRatingAct() < 0 || getRatingAct() > 5){
    cout << "Esa calificación no es válida, selecciona un número entre 0 y 5." << endl;
  setRatingAct();
  }
  *ptrRating = (getRating() + getRatingAct())/2;
  //cout<<endl<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout << endl << " *Las estrellas promedio para " <<getNombre()<<" son: " << getRating() <<"*"<< endl<< endl;
}
