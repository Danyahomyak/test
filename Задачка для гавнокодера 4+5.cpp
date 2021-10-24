#include<iostream>;
using namespace std;

int main()
{
	int Invite_amount, Amount;
	double j;
	cout << " Enter please amount of symbols and christmas tree size: ";
	cin >> Amount;
	cout << endl;
	Invite_amount = Amount;

	for (int i = -Amount; i < Amount; i++)
	{
		j = Amount;
		j--;
		cout << " ";
		for (; j < Invite_amount; j++)
		{
			cout << "*";
		}
		cout << endl;
		Amount--;
	}

	cout << endl;
	Amount = Invite_amount;

	for (int i = -Amount; i < Amount; i++)
	{
		cout << " ";
		for (int j = 0; j < Amount; j++)
		{
			cout << "*";
		}
		cout << endl;
		Amount--;
	}

	cout << endl;
	Amount = Invite_amount;

	for (int i = -Amount; i < Amount; i++)
	{
		j = Amount;
		j--;
		for (; j < Invite_amount; j++)
		{
			cout << " ";
		}
		for (int q = 0; q < Amount; q++)
		{
			cout << "*";
		}
		cout << endl;
		Amount--;
	}

	cout << endl;
	Amount = Invite_amount;

	for (int i = -Amount; i < Amount; i++)
	{
		j = Amount;
		j --;
		for (int q = 0; q < Amount; q++)
		{
			cout << " ";
		}
		for (; j < Invite_amount; j++)
		{
			cout << "*";
		}
		cout << endl;
		Amount--;
	}

	cout << endl;
	Amount = Invite_amount;

	for (int i = -Amount; i < Amount; i++)
	{
		j = Amount;
		j-=0.5;
		for (int q = 0; q < Amount; q++)
		{
			cout << " ";
		}
		for (; j < Invite_amount; j+=0.5)
		{
			cout << "*";
		}
		
		cout << endl;
		Amount--;
	}

	Amount = Invite_amount;

	for (int q = 0; q < Amount; q++)
	{
		cout << " ";
	}
	cout << "*" << endl;
}
