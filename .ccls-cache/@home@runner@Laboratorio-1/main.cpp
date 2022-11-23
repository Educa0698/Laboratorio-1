/*
  Archivo: main.cpp
  Autor: Edwin Caicedo  <Edwin.caicedo@correounivalle.edu.co>
  Fecha creación: 2022-11-22
  Fecha última modificación: 2022-11-22
  Licencia: GNU-GPL
*/ 

/** Historia: Tenemos dos camiones y un conjunto de objetos a transportar, para hacer una mudanza. Cada objeto lo intentamos subir al primer camión, pero si no se puede lo llevamos al segundo camión; y si tampoco se puede, lo dejamos en tierra (no se puede transportar). Luego a cada camión le pedimos que haga la mudanza, que nos diga cuanto peso transportó y que descargue los objetos. 
*/

#include "Camion.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  Camion unCamion("ABC-001", 10000);
  Camion otroCamion("DEF-002", 5000);

  vector<int> objetos = 
  { 
    1000, 3000, 5000, 2000, 500, 1800, 4000, 30 
  };

  for(int cualObjeto = 0; cualObjeto < objetos.size(); cualObjeto++)
  {
    int objetoATransportar = objetos[cualObjeto];
    
    if(not unCamion.cargarUnObjeto(objetoATransportar))
    {
      if(not otroCamion.cargarUnObjeto(objetoATransportar))
      {
        cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
      }
    }
  }
  
  unCamion.hacerMudanza();
  otroCamion.hacerMudanza();
  
  cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.pesoTransportado() << " kg." << endl;
  cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.pesoTransportado() << " kg." << endl;
  
  unCamion.descargar();
  otroCamion.descargar();

  return 0;
}

