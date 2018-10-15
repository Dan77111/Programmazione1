//
// Stampare a video la tabella ASCII dalla A alla z
// comprendente carattere e relativo valore della codifica
//

using namespace std;
#include <iostream>

int main()
{
  char carattere = 'A';
  int codifica;

  while ( carattere <= 'z' ){
    codifica = carattere;
    cout << "Carattere: " << carattere << " Codifica: " << codifica << endl;

    carattere++;
  }

  return (0);
}
