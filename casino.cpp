#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	string playerName;
	int balance = 0;
	int bettingAmount = 0;
	int guess = 0;
	int dice = 0;
	char choice;
	srand(time(0));
	cout << "\n\t\t==========WELCOME TO CASINO WORLD======\n\n";

	cout << "\n\nWhat's yout name: ";
	getline(cin, playerName);
	cout << "\n\nEnter the starting balance to play game: $";
	cin >> balance;

	do
	{
		system ("clear");
		cout << "\n\n Your current balance is $" << balance << "\n";

		do
		{
			cout << "Hey, " << playerName <<", enter amount to bet: $";
			cin >> bettingAmount;
			if (bettingAmount > balance)
				cout << "Betting balance can't be more than current balance!\n" \
						 << "\nRe-enter balance\n";
		}while (bettingAmount > balance);

		do
		{
			cout << "Guess any betting number between 1 & 10:";
			cin >> guess;
			if (guess <= 0 || guess > 10)
				cout << "Number should be between 1 to 10!\n" \
						 << "\nRe-enter number\n";
		}while (guess < 1 || guess > 10);

		dice = rand() % 10 + 1;

		if (guess == dice)
		{
			cout << "\n\nYou are in luck! You have won Rs" << bettingAmount *10;
			balance += bettingAmount * 10;
		}
		else
		{
			cout << "\n\nOpps, better luck next time. You lost $ " << bettingAmount;
			balance -= bettingAmount;
		}
		cout << "\nThe winning number was: " <<  dice << "\n";

		if (balance == 0)
		{
			cout << "You have no money to play\n\n";
			break;
		}
		cout << "\nDo you want to play again(y/n)?";
		cin >> choice;

	}while (choice == 'Y' || choice == 'y');
	return 0;
}
