#ifndef GIARDINO_H
#define GIARDINO_H

const int N_SPECIE = 5;

int quanti[N_SPECIE] = {3, 1, 2, 1, 3};
const char iniziali_nomi_specie[N_SPECIE] = {'P', 'A', 'Q', 'B', 'C'};

enum Specie {PINO, ABETE, QUERCIA, BETULLA, CASTAGNO};

struct Albero{
  Specie nome_specie;
  int numero_identificativo;
};

Albero* * * preparaGiardino(int dimX, int dimY);
void riempiGiardino(Albero* * * giardino, int dimX, int dimY, int quanti[]);
void stampaGiardino(Albero* * * giardino, int dimX, int dimY);

#endif
