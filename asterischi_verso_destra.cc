//
// Stampa n asterischi a video in obliquo verso destra
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
    for ( int j = 0; j < i; j ++ ){
      cout << " ";
    }
    cout << "*" << endl;
  }

  return (0);
}
