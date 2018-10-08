//
// Acquisire da tastiera due numeri reali, calcolare il quoziente
// tra questi due numeri, CONTROLLARE DI NON FARE UNA DIVISIONE
// PER ZERO
//

using namespace std;
#include <iostream>

int main()
{
  float n1, n2, quoziente;

  cout << "Inserire un numero reale: ";
  cin >> n1;

  cout << "Inserire un numero reale: ";
  cin >> n2;

  if ( n2 == 0 ){
    cout << "Non si può dividere un numero per zero" << endl;
  } else {
    quoziente = n1 / n2;
    cout << "n1 / n2 = " << quoziente << endl;
  }

  return (0);
}
