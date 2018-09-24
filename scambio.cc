//
// Prendere in input due numeri interi da tastiera memorizzandoli
// in due variabili distinte.
// Quindi invertire il contenuto delle due variabili.
//

using namespace std;
#include <iostream>

int main()
{
  int cassetto, armadio, cestone;

  cout << "Inserisci un intero: ";
  cin >> cassetto;

  cout << "Inserisci un intero: ";
  cin >> armadio;

  cestone = cassetto;
  cassetto = armadio;
  armadio = cestone;

  cout << cassetto << endl;
  cout << armadio << endl;

  return (0);
}
