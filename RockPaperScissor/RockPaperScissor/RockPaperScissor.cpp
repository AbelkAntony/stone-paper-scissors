#include <iostream>
#include <cstdlib>
using namespace std;

int Point(string userSelection, string computerSelection)
{
	int point = 0;
	if (userSelection == "ROCK")
	{
		if (computerSelection == "ROCK")
		{
			point += 0;
			cout << "\nDRAW\n";
		}
		else if (computerSelection == "PAPER")
		{
			point -= 5;
			cout << "\nCOMPUTER WIN\n";
		}
		if (computerSelection == "SCISSORS")
		{
			point += 10;
			cout << "\nYOU WIN\n";
		}
	}
	else if (userSelection == "PAPER")
	{
		if (computerSelection == "ROCK")
		{
			point += 10;
			cout << "\nYOU WIN\n";
		}
		else if (computerSelection == "PAPER")
		{
			point -= 0;
			cout << "\nDRAW\n";
		}
		if (computerSelection == "SCISSORS")
		{
			point -= 5;
			cout << "\nCOMPUTER WIN\n";
		}
	}
	else if (userSelection == "SCISSORS")
	{
		if (computerSelection == "ROCK")
		{
			point -= 5;
			cout << "\nCOMPUTER WIN\n";
		}
		else if (computerSelection == "PAPER")
		{
			point += 10;
			cout << "\nYOU WIN\n";
		}
		if (computerSelection == "SCISSORS")
		{
			point += 0;
			cout << "\nDRAW\n";
		}
	}
	return point;
}

string ComputerPlayer()
{
	string computer;
	int l = 1;
	int u = 3;
	int x;
	x = (rand() % (u - l + 1)) + l;
	switch (x)
	{
	case 1:
		computer = "ROCK";
		cout << "COMPUTER CHOOSE ROCK\n";
		break;
	case 2:
		computer = "PAPER";
		cout << "COMPUTER CHOOSE PAPER\n";
		break;
	case 3:
		computer = "SCISSORS";
		cout << "COMPUTER CHOOSE SCISSORS\n";
		break;
	}
	return computer;
}
string UserSelection()
{
	int i;
	string userSelection;
	cout << "CHOOSE YOUR OBJECT\n";
	cout << "1. ROCK\n2. PAPER\n3. SCISSORS\n";
	cin >> i;
	switch (i)
	{
	case 1:
		userSelection = "ROCK";
		cout << "YOU CHOOSE ROCK\n";
		return userSelection;
		break;
	case 2:
		userSelection = "PAPER";
		cout << "YOU CHOOSE PAPER\n";
		return userSelection;
		break;
	case 3:
		userSelection = "SCISSORS";
		cout << "YOU CHOOSE SCISSORS\n";
		return userSelection;
		break;
	}
}


void difficult(int i)
{
	int point = 0;
	for (int x = 0; x < i; x++)
	{
		string userSelection;
		string computerSelection;
		userSelection = UserSelection();
		computerSelection = ComputerPlayer();
		point = point + Point(userSelection, computerSelection);
		cout << "TOTAL POINT= " << point << endl;
	}
}

void Menu()
{
	int difficulty;
	int i = 0;
	cout << "CHOOSE DIFFICULT LEVEL\n";
	cout << "1. EASY\n2. MEDIUM\n3. HARD\n";
	cin >> difficulty;
	switch (difficulty)
	{
	case 1:
		cout << "YOU HAVE 3 ROUNDS\n";
		i = 3;
		difficult(i);
		break;
	case 2:
		cout << "YOU HAVE 5 ROUNDS\n";
		i = 5;
		difficult(i);
		break;
	case 3:
		cout << "YOU HAVE 7 ROUNDS\n";
		i = 7;
		difficult(i);
		break;
	default:
		cout << "ENTERED LEVEL OF DIFFICULT IS NOT AVAILABLE\n";
	}
}
int main()
{
	cout << "		      GAME \n\n";
	cout << "	 ROCK , PAPER , SCISSORS\n\n";
	Menu();
	return 0;
}