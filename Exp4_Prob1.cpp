#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c;
	double d;
	char cont;
	cout << "MENU:\n";
	cout << "1. Add\n";
	cout << "2. Subtract\n";
	cout << "3. Multiply\n";
	cout << "4. Divide\n";
	cout << "5. Modulus\n";
	do
	{
		cout << "Enter your choice: ";
		cin >> a;
		cout << "Enter two numbers: ";
		cin >> b >> c;

		switch (a)
		{
		case 1:
		{
			d = b + c;
			cout << "Result: " << d;
			break;
		}
		case 2:
		{
			d = b - c;
			cout << "Result: " << d;
			break;
		}
		case 3:
		{
			d = b * c;
			cout << "Result: " << d;
			break;
		}
		case 4:
		{
			d = b /c;
			cout << "Result: " <<d;
			break;
		}

		case 5:
		{
			d= b % c;
			cout << "Result: " << d;
			break;
		}

		default:
			cout << "Invalid operator!";
		}
		cout << "\nContinue? (y or n): ";
		cin >> cont;
	} while (cont == 'y');
		
	


	_getch();
	return 0;
}