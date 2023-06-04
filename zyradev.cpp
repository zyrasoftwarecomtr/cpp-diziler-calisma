#include <iostream>





using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");

	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*    Zyra Software      *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*************************" << endl << endl << endl << endl;


	

	cout << " Sayıları Giriniz; " << endl;
	int dizi[4];
		for (int i = 0; i < 4; i++) {
			cout << i << " inci sayiyi giriniz ";
			cin >> dizi[i];

		}

		for (int i = 3; i >= 0; i--) {
			cout << dizi[i] << " ";
		}
	


}
