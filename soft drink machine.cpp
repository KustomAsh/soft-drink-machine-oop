#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct drink
{
	string name;
	int cost, no_of_d;
};
void input(int x);
int money = 1;
int main()
{
	int choice = 0, earning = 0;
	drink*arr = new drink[4];
	arr[0].cost = 75; arr[0].name = "Cola      "; arr[0].no_of_d = 20;
	arr[1].cost = 75; arr[1].name = "Root Beer "; arr[1].no_of_d = 20;
	arr[2].cost = 80; arr[2].name = "Grape Soda"; arr[2].no_of_d = 20;
	arr[3].cost = 80; arr[3].name = "Cream Soda"; arr[3].no_of_d = 20;
	while (choice != 99)
	{
		cout << endl << "   Name          Cost   Drinks Left";
		for (int i = 0; i < 4; i++)
		{
			cout << "\n" << i+1 << ". " << (arr + i)->name << setw(8) << (arr + i)->cost << setw(5) << (arr + i)->no_of_d;
		}
		cout << endl << "Pick a drink (1-4) or quit (99) : "; cin >> choice;
		switch (choice) 
		{
		case 1:
		{
			input(75);
			if ((arr->no_of_d) > 0)
			{
				cout << "Your change is : " << money - arr->cost;
				earning += arr[0].cost;
				(arr->no_of_d)--;
			}
			else cout << "Sold Out! ";
			break;
		}
		case 2:
		{
			input(75);
			if ((arr[1].no_of_d) > 0)
			{
				cout << "Your change is : " << money - arr[1].cost;
				earning += arr[1].cost;
				(arr[1].no_of_d)--;
			}
			else cout << "Sold Out! ";
			break;
		}
		case 3:
		{
			input(80);
			if ((arr[2].no_of_d) > 0)
			{
				cout << "Your change is : " << money - arr[2].cost;
				earning += arr[2].cost;
				(arr[2].no_of_d)--;
			}
			else cout << "Sold Out! ";
			break;
		}
		case 4:
		{
			input(80);
			if ((arr[3].no_of_d) > 0)
			{
				cout << "Your change is : " << money - arr[3].cost;
				(arr[3].no_of_d)--;
				earning += arr[3].cost;
			}
			else cout << "Sold Out! ";
			break;
		}
		case 99:
			break;
		default:
		{cout << "Invalid choice";break;}
		}
	}
	cout << "Money Earned : " << earning;
	system("pause>0");
}
void input(int x)
{
	do
	{cout << "Enter the amount of money : "; cin >> money;}
        while (money > 100 || money < x);
}
