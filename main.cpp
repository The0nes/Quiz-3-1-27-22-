#include<iostream>
using namespace std;
int month;

int main() {
	
	int room = 1;
	char input;

	switch (room) {
	case 1:
		cout << "You wake up in a random room" << endl;
		cout << "You can go North(N), West(W), and East(E)" << endl;
		cin >> input;
		if (input == 'N')
			room = 2;
		else if (input == 'E')
			room = 4;
		else if (input == 'W')
			room = 3;
		else
			cout << "not a option." << endl;
		break;
	case 2:
		cout << "you are now in room 2." << endl;
		cout << "You can go South(S)" << endl;
		cin >> input;
		if (input == 'S')
			room = 1;
		else
			cout << "not a option." << endl;
		break;
	case 3:
		cout << "You are now in room 3." << endl;
		cout << "You can only go east(E)." << endl;
		cin >> input;
		if (input == 'E')
			room = 1;
		else
			cout << "not a option." << endl;
		break;

	case 4:
		cout << "You are now in room 4" << endl;
		cout << "You can go west(W) or south(S)." << endl;
		cin >> input;
		if (input == 'S')
			room == 5;
		else if (input == 'W')
			room == 1;
		else
			cout << "not a option." << endl;
		break;
	case 5:
		cout << "You are now in room 5" << endl;
		cout << "You can go north(N)." << endl;
		cin >> input;
		if (input == 'N')
			room == 4;
		else
			cout << "not a option." << endl;
		break;
	}
	

	cout << "Input a month (Jan = 1, Feb =2, etc). " << endl;
	cin >> month;
	if (month == 1)
		cout << "There are 31 days in January" << endl;
	else if (month == 2)
		cout << "There are 28 days in February" << endl;
	else if (month == 3)
		cout << "There are 31 days in March" << endl;
	else if (month == 4)
		cout << "There are 30 days in April" << endl;
	else if (month == 5)
		cout << "There are 31 days in May" << endl;
	else if (month == 6)
		cout << "There are 30 days in June" << endl;
	else if (month == 7)
		cout << "There are 31 days in July" << endl;
	else if (month == 8)
		cout << "There are 31 days in August" << endl;
	else if (month == 9)
		cout << "There are 30 days in September" << endl;
	else if (month == 10)
		cout << "There are 31 days in October" << endl;
	else if (month == 11)
		cout << "There are 30 days in November" << endl;
	else if (month == 12)
		cout << "There are 31 days in December" << endl;
	else
		cout << "Sorry not a month" << endl;
}
