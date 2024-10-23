//Serie.cpp
#include "Serie.h"

Serie::Serie(){

}

Serie::Serie(int id1, string nombre1, string duracion1, string genero1, float calificacion1):Video(id1, nombre1, duracion1, genero1, calificacion1){

}

void Serie::mostrarInfo(){
cout << "\n Datos de la serie seleccionada \n " << endl << "Id: " << getId() << endl << "Nombre: " << getNombre() << endl << "Número de Temporadas: " << getDuracion() << endl << "Género: " << getGenero() << endl << "Calificación: " << getRating() << endl;
}


void Serie::ratingPers(){
  cout << "Ingresa las estrellas (escala 0-5) para la serie " << getNombre()  << endl << endl;
  setRatingAct();
  while (getRatingAct() < 0 || getRatingAct() > 5){
    cout << "Esa calificación no es válida, selecciona un número entre 0 y 5." << endl;
    setRatingAct();
  }
  *ptrRating = (getRating() + getRatingAct())/2;
  cout << endl << "* Las estrellas promedio para " <<getNombre()<<" son: " << getRating()<<"*" << endl<< endl;
  
}
