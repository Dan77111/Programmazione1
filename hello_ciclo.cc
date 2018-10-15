//
// Stampa a video "Hello" fino a quando l'utente vuole
// 1. Stampa di Hello
// 2. Stampa di una domanda del tipo "Vuoi continuare?"
//

using namespace std;
#include <iostream>

int main()
{
  char continuare = 's';

  while ( continuare == 's' ){
    cout << "Hello" << endl;

    cout << "Vuoi continuare? (s/n)";
    cin >> continuare;
  }

  return (0);
}
