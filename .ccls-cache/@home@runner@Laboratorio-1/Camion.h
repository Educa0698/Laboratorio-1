/*
  Archivo: Camion.h
  Autor: Edwin Caicedo  <Edwin.caicedo@correounivalle.edu.co>
  Fecha creación: 2022-11-22
  Fecha última modificación: 2022-11-22
  Licencia: GNU-GPL
*/

/**
CLASE: Camion
INTENCION: Estoy modelando un camión con una placa, que puede transportar una cierta carga en kilos, y que tiene una capacidad máxima en kilos. Se le puede pedir que me diga su placa, que cargue un objeto, que transporte toda la carga y que me diga cuanto transportó y que descargue todo.
RELACIONES: ninguna
*/

#ifndef CAMION_H
#define CAMION_H

#include<string>
using namespace std;

class Camion
{
  private:
  string placa;
  int capacidadMaxima;    
  int pesoTotalCamion;
  bool mudanzaRealizada;
       
  public:
  /**
  Método constructor, devuelve un objeto de tipo Camion.
  */
  Camion(string laPlaca, int laCapacidadMaxima);
  /**
  Destructor de clase
  */
  virtual ~Camion();
  /**
  Retorna la placa del camion
  */
  virtual string cualEsLaPlaca(); 
  /**
  Adiciona un peso determinado de un objeto al camion.
  Verifica si este peso se puede agregar dependiendo de la capacidad maxima, true = se pudo hacer; false = no se pudo
  */
  virtual bool cargarUnObjeto(int pesoDelObjeto); 
  /**
  Pone el atributo el estado de la mudanza como true
  */
  virtual void hacerMudanza();
  /**
  Retorna la carga que transportó
  */
  virtual int pesoTransportado();
  /**
  Descarga el camion
  */
  virtual void descargar();
};

#else
// Declaración adelantada
class Amigo; 
#endif