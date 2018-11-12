//
// Dichiarare ed implementare la funzione radq
// che calcola la radice quadrata di un numero.
//

using namespace std;
#include <iostream>
#include <cmath>

double radq(double n);

int main()
{
  double d;
  cout << "Calcolo radice quadrata di: ";
  cin >> d;

  cout << "Risultato: " << radq(d) << endl;

  return (0);
}

double radq(double n){
  return sqrt(n);
}
