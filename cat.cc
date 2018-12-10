using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main (int argc, char * argv[])
{
  fstream myin;
  char c;
  if ( argc == 1 ){
    cout << "Indicare almeno un file" << endl;
    exit(0);
  }

  for ( int i = 1; i < argc; i ++ ){
    myin.open(argv[i],ios::in);
    if (myin.fail()) {
       cerr << "Il file " << argv[i] << " non esiste\n";
    } else {
      while (myin.get(c)) {
        cout.put(c);
      }  
    }

    myin.close();
  }


  return 0;
}
