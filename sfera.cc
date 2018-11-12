//
// Dichiarare ed implementare la funzione sfera che, presi
// in ingresso tre parametri numerici, uno per valore (raggio) e due
// come riferimento, calcola la superficie e il volume e li salva nel secondo
// e nel terzo parametro (S=4*pi*r^2; V=4*pi*r^3/3)
// Funzione main che richiede raggio, verifica che sia positivo e calcola
// superficie e volume
//

using namespace std;
#include <iostream>
#include <cmath>

void sfera(double raggio, double& superficie, double& volume);

int main()
{
  double raggio, superficie, volume;

  cout << "Raggio sfera: ";
  cin >> raggio;

  if ( raggio > 0 ){
    sfera(raggio, superficie, volume);
    cout << "Superficie: " << superficie << "; Volume: " << volume << endl;
  } else {
    cout << "Il raggio è negativo o nullo" << endl;
  }

  return (0);
}

void sfera(double raggio, double& superficie, double& volume){
  superficie = 4.0 * M_PI * pow(raggio, 2);
  volume = ( 4.0 * M_PI * pow(raggio, 3) ) / 3.0;
}
