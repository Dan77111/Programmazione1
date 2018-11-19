//
// Implementare la funzione ricorsiva tribonacci
// T(0) = 0
// T(1) = 1
// T(2) = 1
// T(n) = T(n - 1) + T(n - 2) + T(n - 3)
//

using namespace std;
#include <iostream>

long tribonacci(int n);

int main()
{
  int n;

  cout << "Inserisci un numero: ";
  cin >> n;

  cout << "T(" << n << ") = " << tribonacci(n) << endl;

  return (0);
}

long tribonacci(int n){
  long res;
  if ( n >= 0 ){
    if ( n == 0 ){
      res = 0l;
    } else if ( n == 1 || n == 2 ){
      res = 1l;
    } else {
      res = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
  }
  return res;
}
