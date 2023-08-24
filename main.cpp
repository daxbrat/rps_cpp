#include "std_lib_facilities.h"

int main()
{
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
		
	} else {
	 computerSelection = 3; // 3 = Scissors
	}
	// cout << computerSelection << '\n';

	cout << "Type a number - 1=rock, 2=paper or 3=scissors: ";
	cin >> playerSelection;

	
}
