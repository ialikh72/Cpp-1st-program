#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
	int num1, num2,choice;
	cout << "enter 1st number: ";
	cin >> num1;
	cout << "enter 2nd number: ";
	cin >> num2;
	cout << "enter 1 for multiplication:\nEnter 2 for sum:\nEnter 3 for subtraction:\nEnter 4 for division:";
		cin>> choice;
	switch (choice)
	{
	case 1:
	{
		int mul = num1 * num2;
		cout << "multiplication is: " << mul;
	}
			break;
	case 2:
	{
		int sum = num1 + num2;
		cout << "sum is: " << sum;
	}
		break;
	case 3:
	{
		int sub = num1 - num2;
		cout << "subtraction is: " << sub;
	}
		break;
	case 4:
	{
		if (num2 != 0)
		{
			int div = num1 / num2;
			cout << "division is: " << div;
		}
		else
		{
			cout << "Error: Division by zero is not allowed.";
		}
	}
		break;
	default:
		cout<< "Invalid choice.";
		break;
	}
    
}

