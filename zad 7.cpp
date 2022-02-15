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

	cout << "Podaj liczbe 1";
	cin >> a;
	cout << "Podaj liczbe 2";
	cin >> b;

	if (a == 0 || b == 0) {

		cout << "liczby muszą być różne od 0!!";

	}
	else {

		cout << "Liczba " << a << " do potegi " << b << " to: " << potegi(a, b);
	}


}

