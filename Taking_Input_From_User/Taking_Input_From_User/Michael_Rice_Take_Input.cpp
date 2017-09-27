/* Michael Rice - 9/25/17 3rd
Problem 2: Take In Data : *
Receive input and display it back to the user. Use operations on inputted integers to produce new integers. */

// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	// Define and Assign your variable(s)
	int period;
	char initial_1;
	char initial_2;
	bool band;
	double e;
	double x;
	double y;

	// Display Text
	cout << "What period do you have your history class? (1 integer)" << endl;
	cin >> period;

	cout << "What is your first initial? (1 uppercase letter)" << endl;
	cin >> initial_1;

	cout << "What is your last initial? (1 uppercase letter)" << endl;
	cin >> initial_2;

	cout << "Are you in band? (1 = yes, 0 = no)" << endl;
	cin >> band;

	cout << "List Euler's number to 7 significant figures: " << endl;
	cin >> e;

	cout << "Give x a number." << endl;
	cin >> x;

	cout << "Give y a number." << endl;
	cin >> y;
	
	cout << "Your history period: " << period << endl;
	cout << "Your initials: " << initial_1 << initial_2 << endl;
	cout << boolalpha << "It is " << band << " that you are in band." << endl;
	if (e == 2.718281) {
		cout << "You know your stuff!" << endl;
	}
	else {
		cout << "Google is your friend." << endl;
	}
	cout << "x + y = " << x + y << endl;
	cout << "x - y = " << x - y << endl;
	cout << "x * y = " << x * y << endl;
	cout << "x / y = " << x / y << endl;

	pause(); // pauses to see the displayed text
}