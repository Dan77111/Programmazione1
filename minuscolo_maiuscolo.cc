//
// Acquisire da tastiera un carattere minuscolo, convertirlo in maiuscolo
// e stamparlo a video
// IL PROGRAMMA DEVE FUNZIONARE PER QUALSIASI CODIFICA UTILIZZATA
//

using namespace std;
#include <iostream>

int main()
{
  char carattere;

  cout << "Inserire un carattere minuscolo: ";
  cin >> carattere;

  carattere -= 'a' - 'A';

  cout << "Il carattere maiuscolo e': " << carattere << endl;

  return (0);
}
