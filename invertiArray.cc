//leggi stampa inverti

using namespace std;
#include <iostream>



void leggiArray(double [], int&);
void stampaArray(const double [], int);
void invertiArray(double a[], int n);
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
  for (int i = 0; i < n / 2; i ++){
    scambia(a[i], a[n - i - 1]);
  }
}

void scambia(double& a, double& b){
  double temp = a;
  a = b;
  b = temp;
}
