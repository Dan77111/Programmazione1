//
// Verificare se un numero intero inserito da tastiera e' primo
//

using namespace std;
#include <iostream>

int main()
{
  int numero, divisore = 2;
  bool primo = false;

  cout << "Inserire un intero: ";
  cin >> numero;

  while ( ( !primo ) && ( divisore <= ( numero / 2 ) ) ){
    if ( ( numero % divisore ) == 0 ){
      primo = true;
      cout << "Il numero inserito non è primo" << endl;
    } else {
      divisore ++;
    }
  }

  if ( !primo ){
    cout << "Il numero inserito è primo" << endl;
  }

  return (0);
}
