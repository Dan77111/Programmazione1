//
// Dichiarare e definire la procedura stampa_inverti che legge dall'utente
// una stringa carattere per carattere (cin.get) e poi la stampa invertita
//

using namespace std;
#include <iostream>

void stampa_inverti();

int main()
{
  cout << "Immettere la parola da invertire: ";

  stampa_inverti();

  cout << endl;

  return (0);
}

void stampa_inverti(){
  char a;
  cin.get(a);
  if ( a != '\n' ){
    stampa_inverti();
    cout << a;
  }
}
