//
// confrontaArray & copiaArray
//

using namespace std;
#include <iostream>
#include <cmath>

void quadratoArray(const int src[], long dest[], int dim);
void stampaArray(const long array[], int dim);

int main()
{
  const int DIM = 5;
  int a[DIM] = {0, 1, 2, 3, 40000};
  long b[DIM];

  quadratoArray(a, b, DIM);
  stampaArray(b, DIM);

  return (0);
}

void quadratoArray(const int src[], long dest[], int dim){
  for ( int i = 0; i < dim; i ++ ){
    dest[i] = pow(src[i],2);
  }
}

void stampaArray(const long array[], int dim){
  cout << "[ ";
  for ( int i = 0; i < dim - 1; i ++ ){
    cout << array[i] << ", ";
  }
  cout << array[dim - 1] << " ]" << endl;
}
