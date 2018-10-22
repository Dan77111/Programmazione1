//
// Trovare il massimo tra 10 numeri reali inseriti da tastiera
// USANDO IL DO - WHILE
//

using namespace std;
#include <iostream>

int main()
{
  float n, massimo;
  int i = 0;

  do {
    cout << "Inserisci un numero reale: ";
    cin >> n;

    if ( ( i == 0 ) || ( massimo < n ) ){
      massimo = n;
    }

    i++;
  } while ( i < 10 );

  cout << "Il massimo e': " << massimo << endl;

  return (0);
}
