//
// Prendere in input tre numeri interi da tastiera
// corrispondenti al valore della base minore, della base maggiore e
// dell'altezza di un trapezio.
// Quindi calcolare e stampare a video l'area del trapezio.
//

using namespace std;
#include <iostream>

int main()
{
  int base_minore, base_maggiore, altezza;
  float area;

  cout << "Inserisci la base minore: ";
  cin >> base_minore;

  cout << "Inserisci la base maggiore: ";
  cin >> base_maggiore;

  cout << "Inserisci l'altezza: ";
  cin >> altezza;

  area = ( base_minore + base_maggiore ) * altezza / 2.0;

  cout << "L'area del trapezio e': ";
  cout << area << endl;

  return (0);
}
