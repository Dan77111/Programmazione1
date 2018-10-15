//
// Acquisire da tastiera due numeri reali, trovare il massimo
// tra questi due numeri e stamparlo a video
//

using namespace std;
#include <iostream>

int main()
{
  float n1, n2;

  cout << "Inserire un numero reale: ";
  cin >> n1;

  cout << "Inserire un numero reale: ";
  cin >> n2;

  // cout << "Il massimo e' " << ( ( n1 > n2 ) ? n1 : n2 ) << endl;

  if ( n1 > n2 ){
    cout << "Il massimo e': " << n1 << endl;
  } else {
    cout << "Il massimo e': " << n2 << endl;
  }

  return (0);
}
