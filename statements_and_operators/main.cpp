#include <iostream>

using namespace std;

int main()
{

	int inc_amount{0};

	cout << "Enter an amount in cents and you will recieve your change:" << endl;
	cin >> inc_amount;

	int dollars{};
	int quarters{};
	int dimes{};
	int nickels{};
	int pennies{};

	while (inc_amount > 0)
	{
		if (inc_amount >= 100)
		{
			dollars += 1;
			inc_amount -= 100;
		}
		else if (inc_amount >= 25)
		{
			quarters += 1;
			inc_amount -= 25;
		}
		else if (inc_amount >= 10)
		{
			dimes += 1;
			inc_amount -= 10;
		}
		else if (inc_amount >= 5)
		{
			nickels += 1;
			inc_amount -= 5;
		}
		else
		{
			pennies += 1;
			inc_amount -= 1;
		}
	}

	cout << "You will get:" << endl;
	cout << "dollars :" << dollars << endl;
	cout << "quarters :" << quarters << endl;
	cout << "dimes :" << dimes << endl;
	cout << "nickels :" << nickels << endl;
	cout << "pennies :" << pennies << endl;

	return 0;
}
