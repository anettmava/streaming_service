//Video.cpp
#include "Video.h"

Video::Video(){
  id = 0;
  nombre = "-";
  duracion = "-";
  genero = "-";
  rating = 0;
  ratingAct = 0;
  ptrRating = &rating;
}

Video::Video(int id1, string nombre1, string duracion1, string genero1, float calificacion1){
    id = id1;
    nombre = nombre1;
    duracion = duracion1;
    genero = genero1;
    rating = calificacion1;
    ptrRating = &rating;
}

int Video::getId(){
  return id;
}

float Video::getRating(){
  return *ptrRating;
}

float Video::getRatingAct(){
  return ratingAct;
}

void Video::setRatingAct(){
    cin >> ratingAct;
}

string Video::getNombre(){
  return nombre;
}

string Video::getDuracion(){
  return duracion;
}

string Video::getGenero(){
  return genero;
}

void Video::mostrarInfo(){
  cout << "Datos del video seleccionado \n" << endl << "ID: " << getId() << endl << "Nombre: " << getNombre() << endl << "Duracion: " << getDuracion() << endl << "Género: " << getGenero() << endl << "Calificación: " << getRating() << endl;
}

void Video::ratingPers(){
  cout << "Ingresa las estrellas (escala 0-5) para la pelicula: " << endl << endl;
  setRatingAct();
  while (getRatingAct() < 0 || getRatingAct() > 5){
    cout << "Esa calificación no es válida, selecciona un número entre 0 y 5" << endl;
    setRatingAct();
  }
  //promediar rating
  *ptrRating = (rating + ratingAct)/2;
  cout << endl << "* Las estrellas promedio para " <<getNombre()<<" son: "<< getRating()<<"*" << endl<< endl;

}
bool Video::operator>( Video& otro) {
    return rating > otro.rating;
}
  

