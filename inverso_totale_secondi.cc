//
// Dato in input il tempo il totalone dei secondi impiegato per fare un certo
// esperimento calcolare il numero di secondi, minuti ed ore
//
//

using namespace std;
#include <iostream>

int main()
{
  int ore, minuti, secondi, totale_secondi;

  cout << "Inserisci i secondi: ";
  cin >> totale_secondi;

  ore = totale_secondi / 3600;

  minuti = ( totale_secondi % 3600 ) / 60;

  secondi = totale_secondi % 60;

  cout << "Il tempo indicato equivale a: ";
  cout << ore << " ore, ";
  cout << minuti << " minuti e ";
  cout << secondi << " secondi " << endl;

  return (0);
}
