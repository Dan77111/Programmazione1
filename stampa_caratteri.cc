//
// Implementare la funzione stampa che riceve in ingresso due caratteri
// dell'alfabeto e stampa tutte le lettere tra di essi, estremi compresi
// stampa deve essere ricorsiva
//

using namespace std;
#include <iostream>

void stampa(char a, char b);

int main()
{
  char a, b;
  do {
    cout << "Inserire la prima e l'ultima lettera: ";
    cin >> a >> b;
  } while ( a > b || a < 'a' || b > 'z' );

  stampa(a, b);

  return (0);
}

void stampa(char a, char b){
  if (a > b){
    cout << endl;
  } else {
    cout << a;
    stampa(a + 1, b);
  }
}
