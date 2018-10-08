//
// Acquisire da tastiera un carattere maiuscolo, convertirlo in minuscolo
// e stamparlo a video
// IL PROGRAMMA DEVE FUNZIONARE PER QUALSIASI CODIFICA UTILIZZATA
//

using namespace std;
#include <iostream>

int main()
{
  char carattere;

  cout << "Inserire un carattere maiuscolo: ";
  cin >> carattere;

  carattere += 'a' - 'A';

  cout << "Il carattere minuscolo e': " << carattere << endl;

  return (0);
}
