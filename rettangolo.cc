//
// Prendere in input due numeri interi da tastiera
// corrispondenti al valore della base e dell'altezza
// di un rettangolo.
// Quindi calcolare e stampare a video l'area del rettangolo.
//

using namespace std;
#include <iostream>

int main()
{
  int base, altezza, area;

  cout << "Inserisci la base: ";
  cin >> base;

  cout << "Inserisci l'altezza: ";
  cin >> altezza;

  area = base * altezza;

  cout << "L'area del rettangolo e': ";
  cout << area << endl;

  return (0);
}
