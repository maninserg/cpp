/*///////////////////////////////
Author: Sergei Manin         ///
Name: Calculate of BMI      ///
*/////////////////////////////

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "\n\t\t=== Calculate of BMI ===\n\n";
	double Weight=0, Height=0, BMI=0;
	cout << "Enter your weight(kg) and your height(m) trough a space and press a button \'enter\': ";
	cin >> Weight >> Height;
	BMI = Weight / (Height * Height);
	cout << "\n\t=== Report ===\n";
	cout << "Your BMI: " << BMI << endl;
	if (BMI >= 18.5 && BMI <= 24.9)
	{
		cout << "You have a normal weight" << endl;
	}
	else if (BMI < 18.5)
	{
		cout << "You have a underweight" << endl;
		cout << "Your normal weight over " << 18.5 * Height * Height << " kg"<< endl;
	}
	else if (BMI > 24.9)
	{
		cout << "You have a overweight" << endl;
		cout << "Your normal weight under " << 24.9 * Height * Height << " kg" << endl;
	}
	return 0;
}
