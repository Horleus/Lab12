#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i, n;
	double res;
	setlocale(LC_ALL, "Ukrainian");
	cout << "������� �i���i��� ������i� �����:";
	cin >> n;
	if (n >= 2) {
		res = 1;
		i = 2;
		while (i <= n) {
			res = res * (1.0 - 1.0 / pow(i, 2));
			i++;
		}
		cout << endl << "��������� = " << res << endl;
	} else
		cout << "�i���i��� ������i� �� ������!" << endl;
	return 0;
}
