// Miles Whaley
// IT - 312 - Q5431 Software Devel w / C++.Net 20EW5
//  June 14th 2020
// The first section of this code asks the user about the number of players and the number of rounds being played for that game. Both of these statements utilize the cout and cin operators. The user can type in the data due to the string variable for each statement. The next part uses a for a loop by asking the user about the player's names. This is based on the number of players joining the game. It uses the cout and cin operators as well. After that, the data are transported to a text file by using string^ filename equals text.txt. This will allow it to be written in the file. This is done exactly the same by displaying the scores. One of the main issues that I faced was fixing the string^ and stream writer. It turns out that I had the wrong file which showed these variables as errors. Therefore, I had to install an extra component to C++ to get this assignment completed.


#include "pch.h"
#include <string>
#include <iostream>
#include <fstream>




using namespace std;
using namespace System;
using namespace System::IO;



// Asks the users about the number of players and rounds for the game.
int main()
{
	cout << "How many players are there?" << endl;

	int players;
	cin >> players;

	cout << "The number of players are : " << players << endl;

	cout << "How many rounds will there be?" << endl;

	int rounds;
	cin >> rounds;

	cout << "The number of rounds will be : " << rounds << endl;
	
	// Asks the user of the player's names.
	for (int i{}; i < players; i++)
	{
		cout << "What is your name?" << endl;


		string name;


		cin >> players >> name;


		cout << "Your name is :" << name << endl;

		String^ fileName = "textfile.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->Write("Your name is :");
		sw->Close();
		Console::WriteLine("a new file ('{0}') has been written", fileName);
	}

	// Displays the score.
	for (int i{}; i < rounds; i++)
		{
		cout << "Your score is." << endl;
		
		string score;
		cin >> score;

		cout << "Your score is :" << score << endl;
	
		String^ fileName = "textfile.txt";
		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->Write("Your score is :");
		sw->Close();
		Console::WriteLine("a new file ('{0}') has been written", fileName);
		}

	return 0;
}