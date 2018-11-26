using namespace std;
#include <iostream>



void leggiArray(double [], int&);
void stampaArray(const double [], int);
void mescolaArray(const double a[], const double b[], double c[], int dim);



int main()
{
  const int size = 100;
  double a[size],b[size],c[2*size];
  int n;

  leggiArray(a,n);
  leggiArray(b,n);
  mescolaArray(a,b,c,n);
  stampaArray(c,2 * n);
return 0;
}

void leggiArray(double a[], int& n)
{
	cout << "Dimensione array?: ";
  cin >> n;

	for (int i = 0; i < n; i++) {
    cout << i << ": ";
		cin >> a[i];
	};
}

void stampaArray(const double a[], int n)
{
 	for (int i = 0; i < n; i++)
    cout << '\t' << i << ": " << a[i] << endl;
}

void mescolaArray(const double a[], const double b[], double c[], int n)
{
  for ( int i = 0; i < 2 * n; i ++ ){
    if ( i % 2 == 0 ){
      c[i] = a[i / 2];
    } else{
      c[i] = b[(i - 1) / 2];
    }
  }
}
