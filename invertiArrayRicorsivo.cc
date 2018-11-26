//leggi stampa inverti

using namespace std;
#include <iostream>

void leggiArray(double [], int&);
void stampaArray(const double [], int);
void invertiArray(double a[], int n);
void invertiArray1(double a[], int primo, int ultimo);
void scambia(double&, double&);


int main()
{
  const int size = 100;
  double a[size];
  int n;

  leggiArray(a,n);
  invertiArray(a,n);
  stampaArray(a,n);
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

void invertiArray(double a[], int n)
{
  invertiArray1(a, 0, n - 1);
}

void invertiArray1(double a[], int primo, int ultimo)
{
  if ( primo < ultimo){
    scambia(a[primo], a[ultimo]);
    invertiArray1(a, primo + 1, ultimo - 1);
  }
}

void scambia(double& a, double& b){
  double temp = a;
  a = b;
  b = temp;
}
