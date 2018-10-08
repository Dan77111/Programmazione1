//
// Acquisire da tastiera un carattere e stampare a video la sua codifica ASCII
//

using namespace std;
#include <iostream>

int main()
{
  char carattere;
  int codifica;

  cout << "Inserire un carattere da tastiera: ";
  cin >> carattere;

  codifica = carattere;

  cout << "Il carattere inserito e': " << carattere << endl;
  cout << "La sua codifica e': " << codifica << endl;

  return (0);
}
