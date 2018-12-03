//
// stampa_matrice(const int[SIZE][SIZE])
// stampa_vettore(const int[SIZE])
// diagonale_principale(const int[SIZE][SIZE],const int[SIZE] )
//

using namespace std;
#include <iostream>

const int SIZE = 3;

void stampa_matrice(const int matrice[SIZE][SIZE]);
void stampa_vettore(const int vettore[SIZE]);
void diagonale_principale(const int matrice[SIZE][SIZE], int vettore[SIZE] );

int main()
{
  int a[SIZE][SIZE] = { {0, 1, 3}, {4, 5, 6}, {8, 10, 12} };
  int v[SIZE];
  stampa_matrice(a);
  diagonale_principale(a, v);
  cout << "Diagonale Principale: " << endl;
  stampa_vettore(v);
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

void stampa_vettore(const int vettore[SIZE]){
  for (int i = 0; i < SIZE; i ++){
    cout << vettore[i] << "\t";
  }
  cout << endl;
}

void diagonale_principale(const int matrice[SIZE][SIZE], int vettore[SIZE] ){
  for (int i = 0; i < SIZE; i ++){
    vettore[i] = matrice[i][i];
  }
}
