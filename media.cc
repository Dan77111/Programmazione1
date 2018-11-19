//
// Implementare la funzione ricorsiva media che calcola la media in maniera
// ricorsiva, in modo interattivo. Ogni volta viene chiesto all'utente
// se inserire un nuovo numero.
// 2 parametri, somma parziale e n invocazioni
//

using namespace std;
#include <iostream>

void media(long somma, int n);

int main()
{
  media(0l, 0);

  return (0);
}

void media(long somma, int n){
  long valore;
  char continuare;

  cout << "Inserire un valore: ";
  cin >> valore;

  somma += valore;
  n ++;

  cout << "Inserire un nuovo valore? [s/n] ";
  cin >> continuare;

  if ( continuare == 'n' ){
    cout << "La media tra i numeri inseriti è " << ( ( somma * 1.0 ) / n ) << endl;
  } else {
    media(somma, n);
  }
}
