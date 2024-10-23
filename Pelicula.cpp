//Pelicula.cpp
#include "Pelicula.h"

Pelicula::Pelicula(){

}

Pelicula::Pelicula(int id1, string nombre1, string duracion1, string genero1, float calificacion1):Video(id1, nombre1, duracion1, genero1, calificacion1){

}

void Pelicula::mostrarInfo(){
  cout << "\n Datos de la pelicula seleccionada: \n" << endl << "Id: " << getId() << endl << "Nombre: " << getNombre() << endl << "Duracion: " << getDuracion() << endl << "Género: " << getGenero() << endl << "Calificación: " << getRating() << endl;
}

void Pelicula::ratingPers(){
  cout << "Ingresa las estrellas (escala 0-5) para la pelicula: " << getNombre()<< endl << endl;
  setRatingAct();
  while (getRatingAct() < 0 || getRatingAct() > 5){
    cout << "Esa calificación no es válida, selecciona un número entre 0 y 5." << endl;
  setRatingAct();
  }
  
  
 
  *ptrRating = (getRating() + getRatingAct())/2;
  cout << endl << "* Las estrellas promedio para " <<getNombre()<<" son: " << getRating()<<"*" <<endl<< endl;

  }