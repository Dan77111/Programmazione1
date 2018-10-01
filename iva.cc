//
// Dato in input il prezzo di un dispositivo, calcolare e
// stampare a video il valore del prezzo con IVA (IVA al 22%)
//

using namespace std;
#include <iostream>

int main()
{
  float prezzo, prezzo_con_iva;

  cout << "Inserisci il prezzo: ";
  cin >> prezzo;

  prezzo_con_iva = prezzo * 1.22;

  cout << "Il prezzo con IVA e': " << prezzo_con_iva << endl;

  return (0);
}
