using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>

int main (int argc, char * argv[])
{
  fstream myin, myout;
  int prezzo;

  if ( argc != 3 ){
    cout << "Sintassi: ./a.out <nome_file_input> <nome_file_output>" << endl;
    exit(0);
  }

  myin.open(argv[1], ios::in);
  myout.open(argv[2], ios::out);

  if (myin.fail()) {
     cerr << "Il file " << argv[1] << " non esiste\n";
     exit(0);
  }

  myin >> prezzo;
  while ( !myin.eof() ) {
    if ( prezzo < 50 ){
      myout << prezzo * 1.08;
    } else if ( prezzo < 100 ){
      myout << prezzo * 1.05;
    } else {
      myout << prezzo * 1.02;
    }
    myout << " ";
    myin >> prezzo;
  }

  myout.close();
  myin.close();

  return 0;
}
