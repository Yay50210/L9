#include <iostream>
#include <iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main()
{

	double money, tax, have, pasi, total;
	cout << "Enter initial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> pasi;
	cout << "Enter amount you can pay per year: ";
	cin >> have;

	cout << setw(13) << left << "EndOfYear#";
	cout << setw(13) << left << "PrevBalance";
	cout << setw(13) << left << "Interest";
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	int i = 1;
	while (money>0)
	{
		cout << fixed << setprecision(2);
		cout << setw(13) << left << i;
		cout << setw(13) << left << money;
		tax = (money * pasi) / 100;
		cout << setw(13) << left << tax;
		total = money + tax;
		cout << setw(13) << left << total;
		if (total < have)
		{
			have = total;
		}
		cout << setw(13) << left << have;
		money = total - have;

		cout << setw(13) << left << money;
		cout << "\n";

		i++;
	}
	return 0;
}
