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
  long totale = 0;
  for (int i = 0; i < SIZE; i ++){
    for (int j = 0; j < SIZE; j ++){
      totale += matrice[i][j];
    }
  }
  return totale;
}
