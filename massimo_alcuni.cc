//
// Trovare il massimo tra ALCUNI numeri reali inseriti da tastiera
//

using namespace std;
#include <iostream>

int main()
{
  float n, massimo;
  int i = 0, quantita;

  cout << "Quanti numeri vuoi inserire? ";
  cin >> quantita;

  while ( i < quantita ){
    cout << "Inserisci un numero reale: ";
    cin >> n;

    if ( ( i == 0 ) || ( massimo < n ) ){
      massimo = n;
    }

    i++;
  }

  cout << "Il massimo e': " << massimo << endl;

  return (0);
}
