//
// Acquisire da tastiera tre numeri reali, trovare il massimo
// tra questi tre numeri e stamparlo a video
//

using namespace std;
#include <iostream>

int main()
{
  float n1, n2, n3;

  cout << "Inserire un numero reale: ";
  cin >> n1;

  cout << "Inserire un numero reale: ";
  cin >> n2;

  cout << "Inserire un numero reale: ";
  cin >> n3;

  if ( ( n1 > n2 ) && ( n1 > n3 ) )
    {
      cout << "Il massimo e': " << n1 << endl;
    }
  else if ( n2 > n3 )
    {
      cout << "Il massimo e': " << n2 << endl;
    }
  else
    {
      cout << "Il massimo e': " << n3 << endl;
    }

  return (0);
}
