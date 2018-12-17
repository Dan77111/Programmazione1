//RIFARE
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "giardino_mod.h"

using namespace std;

int main(int argc, char* argv[])
{
  int dimX, dimY;
  Albero* * * giardino;

  srand(time(NULL));

  if ( argc != 3 ){
    cerr << "Sintassi: ./a.out <dimX> <dimY>" << endl;
    exit(-1);
  }

  dimX = atoi(argv[1]);
  dimY = atoi(argv[2]);

  if ( dimX < 9 || dimY < 9 ){
    cerr << "Sia dimX che dimY devono essere maggiori o uguali a 9" << endl;
    exit(-2);
  }

  giardino = preparaGiardino(dimX, dimY);

  riempiGiardino(giardino, dimX, dimY, quanti);
  stampaGiardino(giardino, dimX, dimY);

  return (0);
}
