//
// Stampa n asterischi a video uno sotto l'altro
// Dove n e' un numero intero acquisito da tastiera
//

using namespace std;
#include <iostream>

int main()
{
  int n;

  cout << "Quanti asterischi vuoi visualizzare? ";
  cin >> n;

  for ( int i = 0; i < n; i ++ ){
    cout << "*" << endl;
  }

  return (0);
}
