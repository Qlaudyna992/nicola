// zadania 6.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <math.h>
using namespace std;

 int potegi(int n, int m) {

	return pow(n, m);

}





int main()
{

	int a, b;

	cout << "Podaj LICZBE 1";
	cin >> a;
	cout << "Podaj LICZBE 2";
	cin >> b;

	if (a == 0 || b == 0) {

		cout << "LICZBY muszą być różne od 0!!";

	}
	else {

		cout << "LICZBA " << a << " do potegi " << b << " to: " << potegi(a, b);
	}


}

