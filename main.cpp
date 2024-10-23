#include "Capitulo.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Video.h"

// Objetos para crear pelis y series
// Series
Serie serie1(4444, "Gilmore girls", "6 temporadas", "Drama", 4.1);
Serie serie2(5555, "Modern Family", "11 temporadas", "Drama", 3.6);
Serie serie3(6666, "Gossip Girl", "6 temporadas", "Drama", 4.2);
// serie1
Capitulo capitulo1_0(7777, "Kiss and tell", "0:45", "Drama", 5.0, 1);
Capitulo capitulo1_2(8888, "Love and war and snow", "0:45", "Comedia", 4.2, 1);
Capitulo capitulo1_3(9999, "Rory's Dance", "0:45", "Misterio/Acción", 4.7, 1);

// serie2
Capitulo capitulo2_1(7830, "Connection lost", "0:54", "Comedia", 4.5, 6);
Capitulo capitulo2_2(9872, "Las Vegas", "0:54", "Comedia", 4.3, 5);
Capitulo capitulo2_3(8391, "The incident", "0:54", "Drama", 3.4, 1);

// serie3
Capitulo capitulo3_1(9812, "Poison ivy", "0:40", "Drama", 4.8, 1);
Capitulo capitulo3_2(5432, "You've got Yale!", "0:55", "Comedia", 4.8, 2);
Capitulo capitulo3_3(4918, "Valley girls", "0:55", "Comedia", 3.9, 2);

string catalogo;
Pelicula peli1(1111, "Siempre a tu lado", "1:33", "Drama", 3.3);
Pelicula peli2(2222, "Little Women", "1:35", "Drama", 4.1);
Pelicula peli3(3333, "Atonement", "1:40", "Romance", 4.5);

void mostrarMejorPelicula(Pelicula &p1, Pelicula &p2, Pelicula &p3) {
  Pelicula *mejor = &p1;

  if (p2 > *mejor) {
    mejor = &p2;
  }
  if (p3 > *mejor) {
    mejor = &p3;
  }

  cout << "La mejor película es: " << mejor->getNombre()
       << " con una calificación de " << mejor->getRating() << endl;
}
void mostrarMejorSerie(Serie &s1, Serie &s2, Serie &s3) {
  Serie *mejor = &s1;

  if (s2 > *mejor) {
    mejor = &s2;
  }
  if (s3 > *mejor) {
    mejor = &s3;
  }

  cout << "La mejor serie es: " << mejor->getNombre()
       << " con una calificación de " << mejor->getRating() << endl;
}

void menu() {
  cout << "***********************************************" << endl;
  cout << "                   TECFLIX" << endl;
  cout << "***********************************************\n";
  cout << "¡Bienvenid@ al mejor servicio de streaming!" << endl;
  cout << endl << "Para comenzar, elija la acción que desea hacer:\n" << endl;
  cout << "1. Ver catálogo de peliculas y/o calificarlas" << endl;
  cout << "2. Ver catálogo de series y/o calificarlas" << endl;
  cout << "3. Cargar catálogo completo de videos" << endl;
  cout << "4. Ver la pelicula con mejor rating" << endl;
  cout << "5. Ver la serie con mejor rating" << endl;
  cout << "6. Cerrar sesión" << endl;
}

void cargarCatalogo() {
  // info de todas las películas
  cout << "***********************************************" << endl;
  cout << "Peliculas disponibles: " << endl;
  cout << "***********************************************\n";
  peli1.mostrarInfo();
  peli2.mostrarInfo();
  peli3.mostrarInfo();

  // información de todas las series y sus capítulos
  cout << "***********************************************" << endl;
  cout << "Series disponibles: " << endl;
  cout << "***********************************************\n";
  serie1.mostrarInfo();
  cout << "Capitulos de " << serie1.getNombre() << ":" << endl;
  capitulo1_0.mostrarInfo();
  capitulo1_2.mostrarInfo();
  capitulo1_3.mostrarInfo();

  serie2.mostrarInfo();
  cout << "Capitulos de " << serie2.getNombre() << ":" << endl;
  capitulo2_1.mostrarInfo();
  capitulo2_2.mostrarInfo();
  capitulo2_3.mostrarInfo();

  serie3.mostrarInfo();
  cout << "Capitulos de " << serie3.getNombre() << ":" << endl;
  capitulo3_1.mostrarInfo();
  capitulo3_2.mostrarInfo();
  capitulo3_3.mostrarInfo();

  // opción para volver al menu principal
  cout << "\n 4.Regresar al menú" << endl;
  cin >> catalogo;
  if (catalogo == "4" || catalogo == "4") {
    menu();
  }
}

void menuPeliculas() {
  cout << "***********************************************" << endl;
  cout << "                  Películas" << endl;
  cout << "*********************************************\n" << endl;
  cout << "¿Qué pelicula quieres ver?: \n" << endl;
  cout << "1." << peli1.getNombre() << endl;
  cout << "2." << peli2.getNombre() << endl;
  cout << "3." << peli3.getNombre() << endl;
  cout << "4. Regresar al menú" << endl << endl;
  cin >> catalogo;
  cout << endl;
  if (catalogo == "1") {
    cout << endl;
    // rate peli 1
    peli1.mostrarInfo();
    cout << endl
         << "¿Quieres calificar la película " << peli1.getNombre() << "?"
         << endl;
    cout << endl << "Escribe Si/No" << endl << endl;
    cin >> catalogo;
    cout << endl;
    if (catalogo == "Si" || catalogo == "si") {
      peli1.ratingPers();
      cout << "¡Gracias por tu calificación!." << endl;
      menuPeliculas();
    } else if (catalogo == "No" || catalogo == "no") {
      cout << "Sesión cerrada" << endl;
      menuPeliculas();
    } else {
      cout << "Por favor ingresa una opcion válida" << endl;
      menuPeliculas();
    }
  }
  // rate pelicula 2
  else if (catalogo == "2") {
    cout << endl
         << "¿Quieres calificar la película " << peli2.getNombre() << "?"
         << endl
         << endl;
    cout << endl << "Escribe Si/No" << endl << endl;
    cin >> catalogo;
    cout << endl;
    if (catalogo == "Si" || catalogo == "si") {
      peli2.ratingPers();
      cout << "¡Gracias por tu calificación!." << endl;
      menuPeliculas();
    } else if (catalogo == "No" || catalogo == "no") {
      cout << "Sesión cerrada" << endl;
      menuPeliculas();
    } else {
      cout << "" << endl;
      menuPeliculas();
    }
  }

  // rate pelicula 3
  else if (catalogo == "3") {
    peli3.mostrarInfo();
    cout << endl
         << "¿Quieres calificar la película " << peli2.getNombre() << "?"
         << endl
         << endl;
    cout << endl << "Escribe Si/No" << endl << endl;
    cin >> catalogo;
    cout << endl;
    if (catalogo == "Si" || catalogo == "si") {
      peli3.ratingPers();
      cout << "¡Gracias por tu calificación!." << endl;
      menuPeliculas();
    } else if (catalogo == "No" || catalogo == "no") {
      cout << "Sesión cerrada" << endl;
      menuPeliculas();
    } else {
      cout << "" << endl;
      menuPeliculas();
    }
  } else if (catalogo == "4") {

    menu();
  } else {
    cout << "Por favor ingrese una opción válida." << endl;
    menuPeliculas();
  }
}

// MENU CAPITULOS

void menuCapitulos() {
  cout << "*********************************************" << endl
       << "Capitulos: " << endl;
  cout << "*********************************************\n" << endl;
  cout << "¿Qué capitulo quieres ver?: \n" << endl;
}

void menuSeries() {
  cout << "*********************************************" << endl
       << "Series" << endl;
  cout << "*********************************************\n" << endl;
  cout << "¿Qué serie quieres ver?: \n" << endl;
  cout << "1." << serie1.getNombre() << endl;
  cout << "2." << serie2.getNombre() << endl;
  cout << "3." << serie3.getNombre() << endl;
  cout << "4. Volver al menú" << endl;
  cin >> catalogo;
  cout << endl;

  // serie 1
  if (catalogo == "1") {
    cout << endl;
    serie1.mostrarInfo();
    cout << endl << "Elije la acción que deseas hacer" << endl << endl;
    cout << "1.Calificar con estrellas " << serie1.getNombre() << endl;
    cout << "2.Ver los capitulos disponibles de " << serie1.getNombre() << endl
         << endl;
    cin >> catalogo;
    // calificar
    if (catalogo == "1") {
      serie1.ratingPers();
      cout << "¡Gracias por tu calificación!." << endl;
      menuSeries();
    }
    // ver capitulos
    else if (catalogo == "2") {
      menuCapitulos();
      cout << "1. " << capitulo1_0.getNombre() << endl;
      cout << "2. " << capitulo1_2.getNombre() << endl;
      cout << "3. " << capitulo1_3.getNombre() << endl << endl;
      cin >> catalogo;
      // cap1
      if (catalogo == "1") {
        capitulo1_0.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo1_0.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Saliendo..." << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      }
      // cap2
      else if (catalogo == "2") {
        capitulo1_2.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo1_2.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      }
      // cap3
      else if (catalogo == "3") {
        capitulo1_3.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo1_3.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else {
        cout << "Por favor ingrese una opción valida." << endl;
        menuSeries();
      }
    } else {
      cout << "Por favor ingrese una opción valida." << endl;
      menuSeries();
    }
  }

  // serie2
  else if (catalogo == "2") {
    cout << endl;
    serie2.mostrarInfo();
    cout << endl << "Elije la acción que deseas hacer" << endl << endl;
    cout << "1.Calificar con estrellas " << serie2.getNombre() << endl;
    cout << "2.Ver los capitulos disponibles de " << serie2.getNombre() << endl
         << endl;
    cin >> catalogo;
    // calificar
    if (catalogo == "1") {
      serie1.ratingPers();
      cout << "¡Gracias por tu calificación!." << endl;
      menuSeries();
    } else if (catalogo == "2") {
      menuCapitulos();
      cout << "1. " << capitulo2_1.getNombre() << endl;
      cout << "2. " << capitulo2_2.getNombre() << endl;
      cout << "3. " << capitulo2_3.getNombre() << endl << endl;
      cin >> catalogo;

      // cap 1
      if (catalogo == "1") {
        capitulo2_1.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo2_1.ratingPers();
          cout << "Sesión cerrada" << endl;
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else if (catalogo == "2") {
        capitulo2_2.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo2_2.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else if (catalogo == "3") {
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo2_3.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else {
        cout << "Por favor ingrese una opción valida." << endl;
        menuSeries();
      }
    } else {
      cout << "Por favor ingrese una opción valida." << endl;
      menuSeries();
    }
  }

  // serie3
  else if (catalogo == "3") {
    cout << endl;
    serie3.mostrarInfo();
    cout << endl << "¿Qué desea hacer?" << endl << endl;
    cout << "1.Calificar serie" << serie2.getNombre()<<endl;
    cout << "2.Ver capitulos" << endl << endl;
    cin >> catalogo;
    if (catalogo == "1") {
      serie3.ratingPers();
      cout << "¡Gracias por tu calificación!." << endl;
      menuSeries();
    } else if (catalogo == "2") {
      menuCapitulos();
      cout << "1. " << capitulo3_1.getNombre() << endl;
      cout << "2. " << capitulo3_2.getNombre() << endl;
      cout << "3. " << capitulo3_3.getNombre() << endl << endl;
      cin >> catalogo;

      // cap1
      if (catalogo == "1") {
        capitulo3_1.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo3_1.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      }
      // cap 2
      else if (catalogo == "2") {
        capitulo3_2.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo1_3.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      }
      // cap 3
      else if (catalogo == "3") {
        capitulo3_3.mostrarInfo();
        cout << endl << "¿Quieres calificar este capitulo?" << endl << endl;
        cout << endl << "Escribe Si/No" << endl << endl;
        cin >> catalogo;
        cout << endl;
        if (catalogo == "Si" || catalogo == "si") {
          capitulo1_3.ratingPers();
          cout << "¡Gracias por tu calificación!." << endl;
          menuSeries();
        } else if (catalogo == "No" || catalogo == "no") {
          cout << "Sesión cerrada" << endl;
          menuSeries();
        } else {
          if (catalogo != "Si" || catalogo != "si" || catalogo != "No" ||
              catalogo != "no") {
            cout << "Por favor ingrese una respuesta valida." << endl;
            menuSeries();
          }
        }
      } else {
        cout << "Por favor ingrese una opción valida." << endl;
        menuSeries();
      }
    } else {
      cout << "Por favor ingrese una opción valida." << endl;
      menuSeries();
    }
  } else if (catalogo == "4") {
    menu();
  } else {
    cout << "Por favor ingrese una opción valida" << endl;
    menuSeries();
  }
}
void opcionMenu() {
  while (true) {
    cin >> catalogo;
    cout << endl;
    if (catalogo == "1") {
      menuPeliculas();
    } else if (catalogo == "2") {
      menuSeries();

    } else if (catalogo == "3") {
      cargarCatalogo();

    }

    else if (catalogo == "4") {
      mostrarMejorPelicula(peli1, peli2, peli3);
      menu();
    } else if (catalogo == "5") {
      mostrarMejorSerie(serie1, serie2, serie3);
      menu();
    } else if (catalogo == "6") {
      cout << "¡Hasta luego!" << endl << endl;
      break;
    }

    else {
      cout << "Por favor ingrese una opción válida\n" << endl;
      menu();
    }
  }
}

int main() {
  menu();
  opcionMenu();

  return 0;
}