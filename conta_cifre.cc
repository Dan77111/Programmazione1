//
// Implementare la funzione ricorsiva conta_cifre che conta il numero di cifre
// di un intero long.
//

using namespace std;
#include <iostream>

int conta_cifre(long n);

int main()
{
  long input;

  cout << "Inserisci un numero: ";
  cin >> input;

  cout << "Numero cifre: " << conta_cifre(input) << endl;

  return (0);
}

int conta_cifre(long n){
  int res;
  if ( n < 10 && n > -10 ){
    res = 1;
  } else {
    res = conta_cifre(n / 10) + 1;
  }
  return res;
}
