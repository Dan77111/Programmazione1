//
// Dichiarare ed implementare la funzione radq
// che calcola la radice quadrata di un numero
// se è positivo.
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
  if ( d >= 0 ){
    cout << "Risultato: " << radq(d) << endl;
  } else {
    cout << "Il numero inserito è negativo" << endl;
  }

  return (0);
}

double radq(double n){
  return sqrt(n);
}
