#include <iostream>
#include <cstdlib>
#include "giardino_mod.h"

Albero* * * preparaGiardino(int dimX, int dimY){
  Albero* * * giardino = new Albero* *[dimX];
  for (int i = 0; i < dimX; i ++){
    giardino[i] = new Albero*[dimY] ;
    for (int j = 0; j < dimY; j ++){
      giardino[i][j] = NULL;
    }
  }
  return giardino;
}

void riempiGiardino(Albero* * * giardino, int dimX, int dimY, int quanti[]){
  int id = 0, pos_x, pos_y;
  
  for ( int i = 0; i < N_SPECIE; i ++ ){
    for ( int j = 0; j < quanti[i]; j ++){
      do {
        pos_x = rand() % dimX;
        pos_y = rand() % dimY;
      } while ( giardino[pos_x][pos_y] != NULL );
      Specie specie = (Specie) i;
      Albero* nuovoAlbero = new Albero;
      nuovoAlbero -> nome_specie = specie;
      nuovoAlbero -> numero_identificativo = id;
      giardino[pos_x][pos_y] = nuovoAlbero;
      id ++;
    }
  }
}

void stampaGiardino(Albero* * * giardino, int dimX, int dimY){
  for (int i = 0; i < dimX; i ++){
    for (int j = 0; j < dimY; j ++){
      if (giardino[i][j] != NULL){
        cout << iniziali_nomi_specie[ ( giardino[i][j] -> nome_specie ) ] << " ";
      } else {
        cout << "* ";
      }
    }
    cout << endl;
  }
}
