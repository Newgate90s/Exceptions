#include<iostream>
#include <string>
#include <exception>
using namespace std;



int main()
{
	//Defined ints.
	int a, b;
	int dadsage;
	int daughtersage;
	int num = 0;
	
	//Frist try block for two values that will be divided.
	try
	{
		//Asks user to input two values that will be dividied.
		cout << "Enter two values to be divided: ";
		cin >> a >> b;
		//If b is equal to zero throws an exception.
		if (b == 0)
			throw b;
		//If b is less than zero(negative) throws an exception.
		else if (b < 0)
			throw "Denominator can't be negative";
		//If neither a zero or a negative are input it divides both inputs.
		else
			cout << "Division results:  " << (a / b);
	}
	//Catches the zero exception.
	catch (int b) {
		cout << "Denominator can't be zero";
	}
	//Catches the negative exception.
	catch (const char* msg) {
		cout << msg;
	}
	//Another exception catch.
	catch (exception& e) {
		cout << "Exception: ";
	}
	//Catches all over exceptions.
	catch (...) { 
		cout << "Other exceptions: ";
	}

	//Seperation between the two try blocks.
	cout << "\n-----------------------------------------------------\n" << endl;

	//Another try block asking for dad's age and daughter's age.
	//It will make sure the daughter isn't older than the dad.
	try {
		//Asks user to input dad's age.
		cout << "Enter dad's age:" << endl;
		cin >> dadsage;
		//Asks user to input daughter's age.
		cout << "Enter daughter's age:" << endl;
		cin >> daughtersage;
		//If the daughter's age is greather than the dad's age throws an error code.
		if (daughtersage > dadsage) {
			throw 001;

		}

	}
	//Catches if the daughter's age was higher than dad's age and prints the error message.
	catch (int x) {
		cout << "Daughter can't be older than dad. \n\nError Code: " << x << endl;
	}

	system("pause");
	return 0;
}

