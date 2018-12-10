//
// Stampare a video i primi n elementi della serie di Fibonacci, dove n e'
// un intero acquisito da tastiera
// 1 1 2 3 5 8 ...
//

using namespace std;
#include <iostream>

int fibonacci(int n, int* serie);

int main()
{
  int n;
  do {
    cout << "Quanti elementi? ";
    cin >> n;

    if ( n < 1 ){
      cout << "Inserire un numero positivo." << endl;
    }
  } while ( n < 1 );

  int* serie = new int[n];
  cout << fibonacci(n, serie) << endl;

  return (0);
}

int fibonacci(int n, int* serie){
  int risultato;
  if ( serie[n - 1] != 0 ){
    risultato = serie[n - 1];
  } else if ( n <= 2 ){
    risultato = 1;
  } else {
    risultato = fibonacci(n - 1, serie) + fibonacci(n - 2, serie);
    serie[n - 1] = risultato;
  }
  return risultato;
}
