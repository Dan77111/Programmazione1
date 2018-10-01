//
// Dato in input il tempo impiegato per fare un certo esperimento
// espresso in secondi, minuti ed ore, calcolare e stampare a video
// il totalone dei secondi
//

using namespace std;
#include <iostream>

int main()
{
  int ore, minuti, secondi, totale_secondi;

  cout << "Inserisci i secondi: ";
  cin >> secondi;
  
  cout << "Inserisci i minuti: ";
  cin >> minuti;

  cout << "Inserisci le ore: ";
  cin >> ore;

  totale_secondi = ( ore * 3600 ) + ( minuti * 60 ) + secondi;

  cout << "Il totale dei secondi e': " << totale_secondi << endl;

  return (0);
}
