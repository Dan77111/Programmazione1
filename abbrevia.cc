//SBAGLIATO ---- DA RIFARE

using namespace std;
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

const int LUNGHEZZA_RIGA = 256;
const int LUNGHEZZA_PAROLA = 4;
const char DELIMITATORI[] = " ,.;:-";

bool delimitatore(char c);

int main (int argc, char * argv[])
{
  fstream myin, myout;
  char riga[LUNGHEZZA_RIGA];
  char parola[LUNGHEZZA_PAROLA + 2];

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

  while ( myin.getline(riga, LUNGHEZZA_RIGA) ) {
    for ( int i = 0, k = 0, indice_delimitatore = 0; i < LUNGHEZZA_RIGA; i ++ ){
      if ( delimitatore(riga[i]) ){
        if ( ( i - indice_delimitatore ) > LUNGHEZZA_PAROLA ){
          parola[LUNGHEZZA_PAROLA] = '.';
        }
        myout << parola << riga[i];
        k = 0;
        indice_delimitatore = i;
      } else {
        parola[k] = riga[i];
        k ++;
      }
    }
    myout << endl;
  }

  myout.close();
  myin.close();

  return 0;
}

bool delimitatore(char c){
  int n_delimitatori = strlen(DELIMITATORI);
  bool risultato = false;
  for ( int i = 0; i < n_delimitatori && !risultato; i ++ ){
    if ( DELIMITATORI[i] == c ){
      risultato = false;
    }
  }
  return risultato;
}
