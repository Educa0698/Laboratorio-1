/*
  Archivo: Camion.cpp
  Autor: Edwin Caicedo  <Edwin.caicedo@correounivalle.edu.co>
  Fecha creación: 2022-11-22
  Fecha última modificación: 2022-11-22
  Licencia: GNU-GPL
*/
#include "Camion.h"

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placa = laPlaca;  
  capacidadMaxima = laCapacidadMaxima;   
  pesoTotalCamion = 0; 
  mudanzaRealizada = false; 
}

string Camion::cualEsLaPlaca() 
{  
  return placa; 
}

bool Camion::cargarUnObjeto(int pesoDelObjeto) 
{
  if(pesoTotalCamion + pesoDelObjeto <= capacidadMaxima) 
  {
    pesoTotalCamion = pesoTotalCamion + pesoDelObjeto;
    return true;
  }
  else 
    return false;  
};

Camion::~Camion()
{
  //No hace nada
}


void Camion::hacerMudanza() 
{
  mudanzaRealizada = true;    
}


int Camion::pesoTransportado() 
{
  if(mudanzaRealizada)     
    return pesoTotalCamion;    
  else     
    return 0; 
} 


void Camion::descargar() 
{
  mudanzaRealizada = false;
  pesoTotalCamion = 0;
}



