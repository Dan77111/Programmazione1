//
// Dichiarare e definire la funzione palindroma che legge una sequenza di
// caratteri e decide se è palindroma ( . in centro ), . è palindromo
//

using namespace std;
#include <iostream>

bool palindroma();

int main()
{
  cout << "Immettere la parola da analizzare (. in centro): ";

  cout << "La stringa inserita " << ( ( palindroma() ) ? "è" : "non è") << " palindroma" << endl;

  return (0);
}

bool palindroma(){
  char a, b;
  bool pal = false;
  cin.get(a);
  if ( a != '.' ){
    if ( palindroma() ){
      cin.get(b);
      if ( a == b ){
        pal = true;
      }
    }
  } else {
    pal = true;
  }
  return pal;
}
