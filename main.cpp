#include "std_lib_facilities.h"
bool x = true;

int main()
{
	while (x) {
		int computerSelection{};
		int playerSelection{};

		// ------------------------Random number generator
		random_device rd;
		seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; // get 8 integers of random numbers from std::random_device for our seed
		mt19937 mt{ ss }; // initialize our Mersenne Twister with the std::seed_seq

		// Create a reusable random number generator that generates uniform numbers between 1 and 6
		uniform_int_distribution die6{ 1, 3 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };

		// Print a bunch of random numbers
		/* for (int count{1}; count <= 1; ++count)
		{
			// cout << die6(mt) << '\t' << endl; // generate a roll of the die here

			// If we've printed 10 numbers, start a new row
			//	if (count % 10 == 0)
			//	std::cout << '\n';
		} */
		// ------------------------------------------------------------------------------------
		if (die6(mt) == 1) {
			computerSelection = 1; // 1 = Rock
		}
		else if (die6(mt) == 2) {
			computerSelection = 2; // 2 = Paper

		}
		else {
			computerSelection = 3; // 3 = Scissors
		}
		// cout << computerSelection << '\n';

		cout << "Type a number - 1=rock, 2=paper, 3=scissors, 4=quit: ";
		cin >> playerSelection;

		// Switch statements next
		if (playerSelection == 4) {
			x = false;
		}
		else {

			if (playerSelection == computerSelection) {
				cout << "Tie!!!\n";
			}
			else {
				switch (playerSelection) {
				case 1: // player chooses Rock
					if (computerSelection == 2) {
						cout << "Paper beats Rock - Computer Wins!!!\n";
					}
					else {
						cout << "Rock beats Scissors - Player Wins!!!\n";
					}
					break;
				case 2: // Player chooses Paper
					if (computerSelection == 1) {
						cout << "Paper beats Rock - Player Wins!!!\n";
					}
					else {
						cout << "Scissors beats Paper - Computer Wins!!!\n";
					}
					break;
				case 3: // Player chooses Scissors
					if (computerSelection == 1) {
						cout << "Rock beats Scissors - Computer Wins!!!\n";
					}
					else {
						cout << "Scissors beats Paper - Player Wins!!!\n";
					}
					break;
				case 4: // Quit
					x = false;
					break;

				default:
					cout << "Not a valid choice\m";
				}
			}
		}
	}
}
