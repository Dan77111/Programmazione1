//
// Acquisire da tastiera un carattere maiuscolo o minuscolo e
// stampare a video se e' una vocale o una consonante
//

using namespace std;
#include <iostream>

int main()
{
  char carattere;

  cout << "Inserire un carattere: ";
  cin >> carattere;

  if ( ( 'a' <= carattere ) && ( carattere <= 'z' ) ){
    carattere -= 'a' - 'A';
  }

  switch ( carattere )
    {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        cout << "Il carattere e' una vocale" << endl;
        break;
      default:
        cout << "Il carattere e' una consonante" << endl;
    }

  return (0);
}
