//
// Dichiarare ed implementare la funzione rgb, che salva nel parametro dec
// il risultato di r * 2 ^ 16 + g * 2 ^ 8 + b. La funzione aggiusta i valori
// di r, g, b se superano al soglia di 255
//

using namespace std;
#include <iostream>
#include <cmath>

void rgb(int* r, int* g, int* b, long int& dec);

int main()
{
  int r, g, b;
  long int dec;

  cout << "R: ";
  cin >> r;

  cout << "G: ";
  cin >> g;

  cout << "B: ";
  cin >> b;

  rgb(&r, &g, &b, dec);

  cout << "Dec: " << dec << endl;
  return (0);
}

void rgb(int* r, int* g, int* b, long int& dec ){
  *r %= 256;
  *g %= 256;
  *b %= 256;
  dec = *r * pow(2,16) + *g * pow(2,8) + *b;
}
