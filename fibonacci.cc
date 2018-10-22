//
// Stampare a video i primi n elementi della serie di Fibonacci, dove n e'
// un intero acquisito da tastiera
// 1 1 2 3 5 8 ...
//

using namespace std;
#include <iostream>

int main()
{
  int n, penultimo = 1, ultimo = 1, corrente;

  cout << "Quanti elementi? ";
  cin >> n;

  if ( n >= 1 ){
    cout << penultimo;
    if ( n >= 2 ){
      cout << " " << ultimo;
      if ( n >= 3 ){
        for ( int i = 2; i < n; i ++ ){
          corrente = penultimo + ultimo;
          penultimo = ultimo;
          ultimo = corrente;
          cout << " " << corrente;
        }
      }
    }
    cout << endl;
  }
  return (0);
}
