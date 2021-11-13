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
		}while (bettingAmount > balance);

		do
		{
			cout << "Guess any betting number between 1 & 10:";
			cin >> guess;
		}while (guess < 1 || guess > 10);
 
		dice = rand() % 10 + 1;

		if (guess == dice)
		{
			balance += bettingAmount * 10;
		}
		else
		{
			balance -= bettingAmount;
		}
		cout << "\nThe winning number was: " <<  dice << "\n";

		cout << "Do you want to play again(y/n)?";
		cin >> choice;

	}while (choice == 'Y' || choice == 'y');
	return 0;
}
