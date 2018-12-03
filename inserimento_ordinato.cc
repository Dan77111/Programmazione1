//
// Funzione inserisci( array ordinato, dimensione, carattere )
//

using namespace std;
#include <iostream>

const int SIZE = 100;
void stampaArray(const char array[], int dim);
bool inserisci(char array[], int& dim, char carattere);

int main()
{
  char array[SIZE];
  int dim = 0;
  char comando;

  do{
    stampaArray(array, dim);
    cout << "Introdurre comando (i/e): ";
    cin >> comando;
    switch (comando) {
      case 'i':
      case 'I':
        char carattere;
        cout << "Inserisci il carattere: ";
        cin >> carattere;
        if (!inserisci(array, dim, carattere)){
          cout << "Non c'è più spazio nell'array" << endl;
        }
        break;
      case 'e':
      case 'E':
        break;
      default:
        cout << "Comando errato" << endl;
    }
  } while ( ( comando != 'e' ) || ( comando != 'E' ) );
  return (0);
}

void stampaArray(const char a[], int n)
{
 	for (int i = 0; i < n; i++)
    cout << '\t' << i << ": " << a[i] << endl;
}

bool inserisci(char array[], int &dim, char carattere){
  bool esito = false;
  if (dim < SIZE){
    int i;
    for ( i = 0; i < dim && array[i] < elemento; i ++ );
    dim ++;
    for ( int j = dim; j > i; j -- ){
      if ( carattere >= array[i]){
        array[j] = array[j - 1];
      }
      array[i] = carattere;
      esito = true;
    }
  }
  return esito;
}
