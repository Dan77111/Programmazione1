//
// codifica(string, string)
// codifica di Cesare (char + 3)
//

using namespace std;
#include <iostream>
#include <cstring>

const int LUNGHEZZA = 256;
char* codifica(const char s[]);
char caesar(char c);

int main()
{
  char sorgente[LUNGHEZZA], *destinazione;
  cout << "Introdurre la stringa da codificare: ";
  cin.getline(sorgente, LUNGHEZZA);
  destinazione = codifica(sorgente);
  cout << destinazione << endl;
  delete[] destinazione;
  return (0);
}

char* codifica(const char s[]){
  int i, len = strlen(s);
  char* d = new char[len + 1];
  for ( i = 0; i < len; i ++ ){
    d[i] = caesar(s[i]);
  }
  d[i] = '\0';
  return d;
}

char caesar(char c){
  char codifica = c;
  if (isalpha(c)){
    if (islower(c)){
      codifica = 'a' +  ( ( c - 'a' + 3 ) % 26 );
    } else {
      codifica = 'A' +  ( ( c - 'A' + 3 ) % 26 );
    }
  }
  return codifica;
}
