//
// Dati in input 2 interi da tastiera memorizzandoli in 2
// variabili distinte chiamate a e b
// stampare a video 1 se a > b 0 altrimenti
// SENZA USARE IF
//

using namespace std;
#include <iostream>

int main()
{
  int a, b;
  bool semaforo;

  cout << "Inserisci l'intero a: ";
  cin >> a;

  cout << "Inserisci l'intero b: ";
  cin >> b;

  semaforo = ( a > b );

  cout << semaforo << endl;

  return (0);
}
