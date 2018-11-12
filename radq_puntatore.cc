//
// Dichiarare ed implementare la funzione radq
// che calcola la radice quadrata di un numero.
// La funzione riceve in ingresso anche un booleano,
// passato per puntatore, che deve valere  vero se
// il numero è negativo.
//

using namespace std;
#include <iostream>
#include <cmath>

double radq(double n, bool* negativo);

int main()
{
  double d, ris;
  bool negativo;

  cout << "Calcolo radice quadrata di: ";
  cin >> d;

  ris = radq(d, &negativo);

  if ( negativo ){
    cout << "Valore negativo" << endl;
  } else {
    cout << "Risultato: " << ris << endl;
  }


  return (0);
}

double radq(double n, bool* negativo){
  double ris = 0.0;
  if ( n >= 0 ){
    ris = sqrt(n);
    *negativo = false;
  } else {
    *negativo = true;
  }
  return ris;
}
