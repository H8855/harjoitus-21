#include <iostream>
using namespace std;

int KysyValinta(void);
double Summa(float, int);

void main()
{
	int luku1, luku2, valinta, laskettusumma, paalla = 1, luvut = 0;
	while (paalla == 1)
	{
		if (luvut == 0)
		{
			cout << "Anna luku 1: ";
			cin >> luku1;
			cout << "Anna luku 2: ";
			cin >> luku2;
			luvut = 1;
		}
		valinta = KysyValinta();

		switch (valinta)
		{
		case 0: paalla = 0;
			break;
		case 1: laskettusumma = Summa(luku1, luku2);
				cout << "Lukujen " << luku1 << " ja " << luku2 << " summa on " << laskettusumma << "\n";
			break;
		case 2: cout << "Lukujen " << luku1 << " ja " << luku2 << " erotus on " << luku1 - luku2 << "\n";
			break;
		case 3: cout << "Lukujen " << luku1 << " ja " << luku2 << " tulo on " << luku1 * luku2 << "\n";
			break;
		case 4: cout << "Lukujen " << luku1 << " ja " << luku2 << " osamaara on " << (float)luku1 / luku2 << "\n";
			break;
		case 5: cout << "Lukujen " << luku1 << " ja " << luku2 << " jakojaannos on " << luku1 % luku2 << "\n";
			break;
		case 6: luvut = 0;
			break;
		default: cout << "Virheellinen valinta\n";
			break;
		}
	}
}

int KysyValinta(void)
{
	int valinta;
	cout << "VALIKKO\n" << "0. Lopetus\n" << "1. Summa\n" << "2. Erotus\n" << "3. Tulo\n" << "4. Osamaara\n" << "5. Jakojaannos\n" << "6. Syota uudet luvut laskemista varten\n";
	cout << "Valitse laskutoimitus: ";
	cin >> valinta;
	return valinta;
}

double Summa(float luku1, int luku2)
{
	return luku1 + luku2;
}