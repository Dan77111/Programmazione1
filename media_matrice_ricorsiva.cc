//
// stampa_matrice(const int[SIZE][SIZE])
// double media(const int[SIZE][SIZE])
//

using namespace std;
#include <iostream>

const int SIZE = 3;

void stampa_matrice(const int matrice[SIZE][SIZE]);
double media(const int matrice[SIZE][SIZE]);
long somma(const int matrice[SIZE][SIZE]);
long somma_ric(const int matrice[SIZE][SIZE], int inizio, int dim);
long somma_riga(const int riga[SIZE], int inizio, int dim);

int main()
{
  int a[SIZE][SIZE] = { {0, 2, 3}, {4, 5, 6}, {8, 10, 12} };
  stampa_matrice(a);
  cout << "Media: " << media(a) << endl;

  return (0);
}

void stampa_matrice(const int matrice[SIZE][SIZE]){
  for (int i = 0; i < SIZE; i ++){
    for (int j = 0; j < SIZE; j ++){
      cout << matrice[i][j] << "\t";
    }
    cout << endl;
  }
}

double media(const int matrice[SIZE][SIZE]){
  return ( (double)somma(matrice) / (SIZE * SIZE));
}

long somma(const int matrice[SIZE][SIZE]){
  long somma = 0;
  somma += somma_ric(matrice, 0, SIZE);
  return somma;
}

long somma_ric(const int matrice[SIZE][SIZE], int inizio, int dim){
  long somma = 0;
  if (inizio < dim){
    somma = somma_riga(matrice[inizio], 0, dim) + somma_ric(matrice, inizio + 1, dim);
  }
  return somma;
}

long somma_riga(const int riga[SIZE], int inizio, int dim){
  long somma = 0;
  if (inizio < dim){
    somma = riga[inizio] + somma_riga(riga, inizio + 1, dim);
  }
  return somma;
}
