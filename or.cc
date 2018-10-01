//
// Stampare a video tutte i possibili risultati dell'operazione
// a OR b dove a e b sono due variabili booleane
// ( TABELLA DI VERITA' DELL'OPERATORE OR )
//

using namespace std;
#include <iostream>

int main()
{
  bool a, b;
  
  cout << "a b or" << endl;

  a = false;
  b = false;
  cout << a << " " << b << " " << (a || b) << endl;

  b = true;
  cout << a << " " << b << " " << (a || b) << endl;

  a = true;
  b = false;
  cout << a << " " << b << " " << (a || b) << endl;

  b = true;
  cout << a << " " << b << " " << (a || b) << endl;


  return (0);
}
