//
// Trovare il massimo tra 10 numeri reali inseriti da tastiera
//

using namespace std;
#include <iostream>

int main()
{
  float n, massimo;
  int i = 0;

  while ( i < 10 ){
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
