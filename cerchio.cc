//
// Prendere in input una variabile intera che corrisponde al
// valore del raggio di un cerchio.
// Quindi calcolare e stampare a video l'area e il perimetro
// del cerchio, impostando il valore di Pi Greco come costante.
//

using namespace std;
#include <iostream>

int main()
{
  int raggio;
  float area, perimetro;
  const float Pi = 3.14;

  cout << "Inserisci il raggio: ";
  cin >> raggio;

  area = raggio * raggio * Pi;
  perimetro = 2 * raggio * Pi;

  cout << "L'area del cerchio e': ";
  cout << area << endl;

  cout << "Il perimetro del cerchio e': ";
  cout << perimetro << endl;

  return (0);
}
