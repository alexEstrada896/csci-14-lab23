/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
#include <string>
#include <iomanip>
//structure to store the player info
struct PlayerInf
{
	string name;
	int number, points;
};

int main()
{
//4 players
	const int TEAM = 4;
//array of structure
	PlayerInf players[TEAM];

	int totalPoints = 0;
	int highestNumber = 0;
	int highestPoints = 0;
	string highestName;


//asks user to enter name , number abd points for each payer
	for (int index = 0 ; index < TEAM ; index++)
	{
		cout << "Enter the name of player "<<(index + 1) <<": "<<endl;
		getline(cin, players[index].name);


		cout << "Enter the number of player "<<(index + 1) <<": "<<endl;
		cin >> players[index].number;

		cout << "Enter the points scored by player "<<(index + 1) <<": "<<endl;
		cin >> players[index].points;
//validates input 	
		while (players[index].points < 0)
		{
			cout <<"Invalid input. Please enter a non-negative number: "<<endl;
			cin >> players[index].points;
		}
		cin.ignore();
//adds points to the total
		totalPoints =  totalPoints + players[index].points ;
//checks for highest value , number  and name
		if (players[index].points > highestPoints)
		{
			highestPoints = players[index].points;
			highestName = players[index].name;
			highestNumber = players[index].number;
		}
	}


cout <<setw(16)<<left<<"Table:"<<setw(13)<<left<<"Player 1"<<setw(13)<<left<<"Player 2"<<setw(13)<<left<<"Player 3"<<setw(13)<<left<<"Player 4"<<endl;
cout <<setw(16)<<left<<"Name:"<<setw(13)<<left<<players[0].name<<setw(13)<<left<<players[1].name<<setw(13)<<left<<players[2].name<<setw(13)<<left<<players[3].name<<endl;
cout <<setw(16)<<left<<"Number:"<<setw(13)<<left<<players[0].number<<setw(13)<<left<<players[1].number<<setw(13)<<left<<players[2].number<<setw(13)<<left<<players[3].number<<endl;
cout <<setw(16)<<left<<"Points:"<<setw(13)<<left<<players[0].points<<setw(13)<<left<<players[1].points<<setw(13)<<left<<players[2].points<<setw(13)<<left<<players[3].points<<endl;


cout <<"Total points earned: "<<totalPoints<<endl;

cout <<highestName<<", number "<<highestNumber<<" scored the most points: "<<highestPoints;

	return 0;
}