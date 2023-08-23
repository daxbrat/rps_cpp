#include "std_lib_facilities.h"

int main()
{
	int computerSelection{};
	int playerSelection{};

	// ------------------------Random number generator
	std::random_device rd;
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; // get 8 integers of random numbers from std::random_device for our seed
	std::mt19937 mt{ ss }; // initialize our Mersenne Twister with the std::seed_seq

	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution die6{ 1, 3 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };

	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 1; ++count)
	{
		std::cout << die6(mt) << '\t' << std::endl; // generate a roll of the die here
		system("pause>0");

		// If we've printed 10 numbers, start a new row
		//	if (count % 10 == 0)
		//	std::cout << '\n';
	}
	// ------------------------------------------------------------------------------------

}