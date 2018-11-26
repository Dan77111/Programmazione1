//
// confrontaArray & copiaArray
//

using namespace std;
#include <iostream>

bool confrontaArray(const char array1[], const char array2[], int dim);
void copiaArray(char dest[], const char src[], int dim);

int main()
{
  const int DIM = 5;
  char a[DIM] = {'a', 'b', 'c', 'd', 'e'};
  char b[DIM];

  if ( confrontaArray(a, b, DIM) ){
    cout << "I due array sono uguali" << endl;
  } else {
    cout << "I due array non sono uguali: copio gli array" << endl;
    copiaArray(b, a, DIM);
    if ( confrontaArray(a, b, DIM) ){
      cout << "I due array adesso sono uguali" << endl;
    }
  }

  return (0);
}

bool confrontaArray(const char array1[], const char array2[], int dim){
  bool uguali = true;
  for ( int i = 0; i < dim & uguali; i ++ ){
    // uguali = ( array1[i] != array2[i] );
    if ( array1[i] != array2[i] ){
      uguali = false;
    }
  }
  return uguali;
}

void copiaArray(char dest[], const char src[], int dim){
  for ( int i = 0; i < dim; i ++ ){
    dest[i] = src[i];
  }
}
