//
// Dati in input 3 interi da tastiera memorizzandoli in 3
// variabili distinte chiamate a, b e c
// stampare a video 1 se a è il maggiore e 0 altrimenti
// SENZA USARE IF
//

using namespace std;
#include <iostream>

int main()
{
  int a, b, c;
  bool semaforo;

  cout << "Inserisci l'intero a: ";
  cin >> a;

  cout << "Inserisci l'intero b: ";
  cin >> b;

  cout << "Inserisci l'intero c: ";
  cin >> c;

  semaforo = ( a > b ) && ( a > c );

  cout << semaforo << endl;

  return (0);
}
