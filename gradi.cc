//
// Dato in input il valore della temperatura in gradi F
// calcolare il corrispondente valore in gradi C
// ( C = (F - 32)/1,8 )
//

using namespace std;
#include <iostream>

int main()
{
  float f, c;

  cout << "Inserisci la temperatura in gradi F: ";
  cin >> f;

  c = ( f - 32 ) / 1.8;

  cout << "La temperatura in gradi C e': " << c << endl;

  return (0);
}
