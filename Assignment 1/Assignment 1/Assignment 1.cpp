// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>


int main() 
{
	string inventory = 
	std::vector<string> inventory;

	std::cout << inventory.push_back("hammer");
	std::cout << inventory.push_back("sickle");
	std::cout << inventory.push_back("chisel");

	std::cout << "You have " << inventory.size() << " items.\n";

	std::cout << "\nYor items:\n";


		for (int i = 0; i < inventory.size(); ++i) {
		std::cout << inventory[i];
	}


		return 0;
}
