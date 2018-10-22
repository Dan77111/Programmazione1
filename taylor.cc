//
// Usando la formula di Taylor, preso in input da tastiera il valore reale di x,
// Calcolare l'approssimazione di ln(1+x) con tutti n controlli necessari
// Sono ammesse le funzioni della libreria cmath
// Per verificare l'approssimazione di ln e' ammesso l'uso della calcolatrice
// di sistema.
//

using namespace std;
#include <iostream>
#include <cmath>

int main()
{
  double x, approssimazione = 0;
  int passi;

  do {
    cout << "Inserire il valore di x (-1 < x < 1): ";
    cin >> x;
  } while ( ( x >= 1 ) || ( x <= -1 ) );

  do {
    cout << "Inserire il numero di passi: ";
    cin >> passi;
  } while ( passi < 0 );

  for ( int n = 1; n <= passi; n ++ ) {
    approssimazione += pow( -1, ( n + 1 ) ) * ( ( pow( x, n ) / n ) );
  }

  cout << "ln( 1 + " << x << " ) = " << approssimazione << endl;
  // La riga sotto toglie il + in caso di x negativi
  // cout << "ln( 1 " << ( ( x >= 0 ) ? "+" : "") << x << " ) = " << approssimazione << endl;

  return (0);
}
