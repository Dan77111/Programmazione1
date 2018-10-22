//
// Stampa n asterischi a video in obliquo verso sinistra
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
    // for ( int j = n - 1; j > i; j -- ){
    for ( int j = 0; j < ( n - i - 1 ); j ++ ){
      cout << " ";
    }
    cout << "*" << endl;
  }

  return (0);
}
