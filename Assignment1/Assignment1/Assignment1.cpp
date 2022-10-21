// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

void Bow();
void Spear();
void Shield();

char YesOrNo;
int Number;
std::vector<std::string> inventory;
bool isRunning = true;
int mCoin = 30;
int pCoin = 20;
int bowPrice = 15;
int spearPrice = 15;
int shieldPrice = 10;
int hammerPrice = 5;
int sicklePrice = 5;
int chiselPrice = 5;


int main()

{
	inventory.push_back("1. bow - 15 coins");
	inventory.push_back("2. spear - 15 coins");
	inventory.push_back("3. shield - 10 coins");
	/*inventory.push_back("30 coins");*/
	
	std::cout << "Igor: Hello stranger my name is Igor The Merchant.\nWould you like to buy anything? \n";

	std::cin >> YesOrNo;
	if (YesOrNo == 'y') {

		std::cout << "\nI have " << inventory.size() << " items.\n";

		std::cout << "\nMy items:\n";

		for (int i = 0; i < inventory.size(); ++i) {
			std::cout << inventory[i] << std::endl;
		}
		 
		do {

			std::cin >> Number;
			if (Number == 1) {
				if (pCoin < bowPrice) {
					std::cout << "Sorry you don't have enough coins.\n";
				}
				else {
					Bow();
				}

			}
			else if (Number == 2) {
				Spear();
			}
			else if (Number == 3) {
				Shield();
			}
			else if (Number == 4) {
				isRunning = false;
			}
		} while (isRunning == true);
		return 0;
	}
	else if (YesOrNo == 'n') {
		std::cout << "Igor: Alright have a nice day\n";
	}

	
	//std::vector<std::string> inventory;

	//inventory.push_back("hammer");
	//inventory.push_back("sickle");
	//inventory.push_back("chisel");
	///*inventory.push_back("20 coins");*/

	//std::cout << "\nYou have " << inventory.size() << " items.\n";

	//std::cout << "\nYour items:\n";

	//for (int i = 0; i < inventory.size(); ++i) {
	//	std::cout << inventory[i] << std::endl;
	//}


	return 0;
}

void Bow() { //bow function (it makes the bow selectable/interact)
	/*std::string BOW;*/
	std::cout << "You have purchased the bow.\n";
	pCoin -= bowPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin += bowPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
}

void Spear() { //spear function (it makes the spear selectable/interact)
	/*std::string SPEAR;*/
	std::cout << "You have purchased the spear.\n";
	pCoin -= spearPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
}

void Shield() { //shield function (it makes the shield selectable/interact)
	/*std::string SHIELD;*/
	std::cout << "You have purchased the shield.\n";
	pCoin -= shieldPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
}
