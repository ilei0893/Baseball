#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

struct baseballplayers //Struct with variables for each stat.
{
	string firstName;
	string lastName;
	string teamName;
	int numHomeRuns;
	double battingAverage;
	int runsBattedIn;
};

void printallplayers(baseballplayers players[]); //Function to print all players and stats.
void printstats(baseballplayers players[]);      //Function to print stats of a specific player.
void printteamdata(baseballplayers players[]);   //Function to print stats for a specific team.
void setPlayerStats(baseballplayers players[]);  //Function to set a specific stat for a player.
void printmenu();                                //Function to print the beginner menu.
void printStatHeader();							 //Function to print the header for stats.
void printTeamHeader();							 //Function to print the header for the team.

int main()
{

	ifstream fin("text.txt"); //Reads in from file.
	int num;
	char userDataFile;
	baseballplayers players[10]; //Array of 10 components of type baseBallPlayers.
	if (!fin) //If file does not open, print error.
	{
		cout << "error opening file." << endl;
		return 1;
	}
	for (int i = 0; i < 10; i++) //Reads in each player and their stats from file.
	{
		fin >> players[i].firstName >> players[i].lastName >> players[i].teamName >> players[i].numHomeRuns >> players[i].battingAverage >> players[i].runsBattedIn;
	}
	do //Loops the program until the user selects 5 to exit.
	{
		printmenu();
		cin >> num;
		if (num == 1) //User selects 1 of 5 menu options.
		{
			printallplayers(players);
		}
		else if (num == 2)
		{
			printstats(players);
		}
		else if (num == 3)
		{
			printteamdata(players);
		}
		else if (num == 4)
		{
			setPlayerStats(players);
		}
		else if (num == 5)
		{
			break;
		}
		else
		{
			cout << "Not a valid number. " << endl;
		}
	} while (num != 5);
	cout << "Would you like to store the data in a file? (Y/N)" << endl; //Asks user to store data in a file.
	cin >> userDataFile;
	if (userDataFile == 'Y')
	{
		ofstream fout("Stats.txt"); //Create output file.
		for (int i = 0; i < 10; i++)
		{
			fout << players[i].firstName << " " << players[i].lastName << " " << players[i].teamName << " " << players[i].numHomeRuns << " " << players[i].battingAverage << " " << players[i].runsBattedIn << endl;
		}
		fout.close();
	}

	fin.close();
	system("pause");
	return 0;
}

void printallplayers(baseballplayers players[]) //Function to print all players and stats.  
{
	printStatHeader();
	for (int i = 0; i < 10; i++)
	{
		cout << setw(18) << (players[i].firstName + " " + players[i].lastName) << setw(12) << players[i].teamName << setw(17) << players[i].numHomeRuns
			<< setw(18) << players[i].battingAverage << players[i].runsBattedIn << endl;
	}
	cout << endl;
}
void printstats(baseballplayers players[]) //Function to print stats of a specific player.
{
	int num;
	cout << "Select a player." << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". " << players[i].firstName << " " << players[i].lastName << endl;
	}
	cin >> num;

	switch (num)
	{
	case 1: printStatHeader();
		cout << setw(18) << (players[0].firstName + " " + players[0].lastName) << setw(12) << players[0].teamName << setw(17) << players[0].numHomeRuns
			<< setw(18) << players[0].battingAverage << players[0].runsBattedIn << endl;
		break;
	case 2: printStatHeader();
		cout << setw(18) << (players[1].firstName + " " + players[1].lastName) << setw(12) << players[1].teamName << setw(17) << players[1].numHomeRuns
			<< setw(18) << players[1].battingAverage << players[1].runsBattedIn << endl;
		break;
	case 3: printStatHeader();
		cout << setw(18) << (players[2].firstName + " " + players[2].lastName) << setw(12) << players[2].teamName << setw(17) << players[2].numHomeRuns
			<< setw(18) << players[2].battingAverage << players[2].runsBattedIn << endl;
		break;
	case 4: printStatHeader();
		cout << setw(18) << (players[3].firstName + " " + players[3].lastName) << setw(12) << players[3].teamName << setw(17) << players[3].numHomeRuns
			<< setw(18) << players[3].battingAverage << players[3].runsBattedIn << endl;
		break;
	case 5: printStatHeader();
		cout << setw(18) << (players[4].firstName + " " + players[4].lastName) << setw(12) << players[4].teamName << setw(17) << players[4].numHomeRuns
			<< setw(18) << players[4].battingAverage << players[4].runsBattedIn << endl;
		break;
	case 6: printStatHeader();
		cout << setw(18) << (players[5].firstName + " " + players[5].lastName) << setw(12) << players[5].teamName << setw(17) << players[5].numHomeRuns
			<< setw(18) << players[5].battingAverage << players[5].runsBattedIn << endl;
		break;
	case 7: printStatHeader();
		cout << setw(18) << (players[6].firstName + " " + players[2].lastName) << setw(12) << players[6].teamName << setw(17) << players[6].numHomeRuns
			<< setw(18) << players[6].battingAverage << players[6].runsBattedIn << endl;
		break;
	case 8: printStatHeader();
		cout << setw(18) << (players[7].firstName + " " + players[7].lastName) << setw(12) << players[7].teamName << setw(17) << players[7].numHomeRuns
			<< setw(18) << players[7].battingAverage << players[7].runsBattedIn << endl;
		break;
	case 9: printStatHeader();
		cout << setw(18) << (players[8].firstName + " " + players[8].lastName) << setw(12) << players[8].teamName << setw(17) << players[8].numHomeRuns
			<< setw(18) << players[2].battingAverage << players[2].runsBattedIn << endl;
		break;
	case 10:printStatHeader();;
		cout << setw(18) << (players[9].firstName + " " + players[9].lastName) << setw(12) << players[9].teamName << setw(17) << players[92].numHomeRuns
			<< setw(18) << players[9].battingAverage << players[9].runsBattedIn << endl;
		break;
	default: cout << "Not a valid number." << endl;
		break;
	}
	cout << endl;

}
void printteamdata(baseballplayers players[]) //Function to print stats for a specific team.
{
	int choice;
	cout << left;
	cout << "Select a team: " << endl;
	cout << "1: Boston Red Sox." << endl;
	cout << "2: Houston Astros." << endl;
	cout << "3: New York Mets." << endl;
	cin >> choice;
	if (choice == 1)
	{
		printTeamHeader();
		cout << setw(12) << players[0].teamName << setw(17) << players[0].numHomeRuns + players[1].numHomeRuns + players[2].numHomeRuns << setw(18)
			<< (players[0].battingAverage + players[1].battingAverage + players[2].battingAverage) / 3.0
			<< players[0].runsBattedIn + players[1].runsBattedIn + players[2].runsBattedIn << endl;
	}
	else if (choice == 2)
	{
		printTeamHeader();
		cout << setw(12) << players[3].teamName << setw(17) << players[3].numHomeRuns + players[4].numHomeRuns + players[5].numHomeRuns << setw(18)
			<< (players[3].battingAverage + players[4].battingAverage + players[5].battingAverage) / 3.0
			<< players[3].runsBattedIn + players[4].runsBattedIn + players[5].runsBattedIn << endl;
	}
	else if (choice == 3)
	{
		printTeamHeader();
		cout << setw(12) << players[6].teamName << setw(17) << players[6].numHomeRuns + players[7].numHomeRuns + players[8].numHomeRuns << setw(18)
			<< (players[6].battingAverage + players[7].battingAverage + players[8].battingAverage) / 4.0
			<< players[6].runsBattedIn + players[7].runsBattedIn + players[8].runsBattedIn << endl;
	}
	else
	{
		cout << "Not a valid number. " << endl;
	}
	cout << endl;
}

void setPlayerStats(baseballplayers players[])  //Function to set a specific stat for a player.
{
	int choice1;
	int choice2;
	int statChange;
	cout << "Select a player." << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". " << players[i].firstName << " " << players[i].lastName << endl;
	}
	cin >> choice1;
	cout << "What stat would you like to change? " << endl;
	cout << "1. Home runs." << endl
		<< "2. Batting Average." << endl
		<< "3. Runs Batted in." << endl;
	cin >> choice2;
	switch (choice2)
	{
	case 1: cout << "Enter a new amount of Home runs: ";
		cin >> statChange;
		players[choice1 - 1].numHomeRuns = statChange;
		break;
	case 2: cout << "Enter a different Batting Average: ";
		cin >> statChange;
		players[choice1 - 1].battingAverage = statChange;
		break;
	case 3: cout << "Enter a new amount of Runs Batted in: ";
		cin >> statChange;
		players[choice1 - 1].runsBattedIn = statChange;
		break;
	default: cout << "Not a valid number." << endl;
		break;
	}
}
void printmenu() //Function to print the beginner menu.
{
	cout << left << "Select an Option" << endl
		<< setfill('-') << setw(35) << "-" << endl;
	cout << "1: Print all players and stats." << endl;
	cout << "2: Print out a player's stats." << endl;
	cout << "3: Print data for a specific team." << endl;
	cout << "4: Set data for a specific player." << endl;
	cout << "5: Exit the program." << endl;
}

void printStatHeader() //Function to print the header for stats.
{
	cout << left;
	cout << setfill(' ') << setw(18) << "Player Name" << setw(12) << "Team Name" << setw(17) << "# of Home runs" << setw(18) << "Batting Average" << "Runs Batted In" << endl;
}

void printTeamHeader() //Function to print the header for the team.
{
	cout << left;
	cout << setfill(' ') << setw(12) << "Team Name" << setw(17) << "# of Home runs" << setw(18) << "Batting Average" << "Runs Batted In" << endl;
}

