//
// Acquisire da tastiera un carattere, criptarlo,
// decriptarlo e stamparlo a video
//

using namespace std;
#include <iostream>

int main()
{
  char carattere;
  int carattere_criptato;

  cout << "Inserire un carattere: ";
  cin >> carattere;

  carattere_criptato = carattere * 6 + 'a';

  carattere = ( carattere_criptato - 'a' ) / 6;

  cout << "Il carattere e': " << carattere << endl;

  return (0);
}
