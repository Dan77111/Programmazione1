//
// Presi in input tre numeri interi corrispondenti
// ai coefficienti a, b, c di un polinomio di secondo grado
// calcolare le radici di questo polinomio.
//

using namespace std;
#include <iostream>
#include <cmath>

int main()
{
  int a, b, c, delta;
  float x1, x2;

  cout << "Inserisci a: ";
  cin >> a;

  cout << "Inserisci b: ";
  cin >> b;

  cout << "Inserisci c: ";
  cin >> c;

  if ( a != 0 ){
    delta = ( b * b ) - ( 4 * a * c );

    if ( delta >= 0 ){
      x1 = ( -b + sqrt(delta) ) / ( 2 * a );
      x2 = ( -b - sqrt(delta) ) / ( 2 * a );

      cout << "Le soluzioni sono: " << x1 << ", " << x2 << endl;
    } else {
      cout << "Non esiste soluzione nei numeri reali " << endl;
    }
  } else {
    cout << "I dati inseriti non corrispondono a un polinomio di secondo grado" << endl;
  }

  return (0);
}
