//
// Dato m intero il valore di una base e n intero il valore di un esponente
// calcolare m^n SENZA USARE cmath
//

using namespace std;
#include <iostream>

int main()
{
  int m, n;
  long int risultato = 1;

  cout << "Inserire la base: ";
  cin >> m;

  cout << "Inserire l'esponente: ";
  cin >> n;

  for ( int i = 0; i < n; i ++ ){
    risultato *= m;
  }

  cout << "Il risultato e': " << risultato << endl;
  return (0);
}
