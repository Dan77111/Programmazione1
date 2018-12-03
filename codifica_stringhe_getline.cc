//
// codifica(string, string)
// codifica di Cesare (char + 3)
//

using namespace std;
#include <iostream>
#include <cstring>

const int LUNGHEZZA = 256;
void codifica(char d[], const char s[]);
char caesar(char c);

int main()
{
  char sorgente[LUNGHEZZA], destinazione[LUNGHEZZA];
  cin.getline(sorgente, LUNGHEZZA);
  codifica(destinazione, sorgente);
  cout << destinazione << endl;
  return (0);
}

void codifica(char d[], const char s[]){
  int i, len = strlen(s);
  for ( i = 0; i < len; i ++ ){
    d[i] = caesar(s[i]);
  }
  d[i] = '\0';
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
