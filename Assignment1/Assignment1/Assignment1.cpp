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
void BowQ();

void Hammer();
void Sickle();
void Chisel();



char YesOrNo;
char SellOrDont;
char BuyOrSell;

int Number;

std::vector<std::string> inventory;

bool buyisRunning = true;
bool sellisRunning = true;

int mCoin = 30;
int pCoin = 50;

int bowPrice = 15;
int spearPrice = 15;
int shieldPrice = 10;

int hammerPrice = 5;
int sicklePrice = 5;
int chiselPrice = 5;

int merchantBowQuantity = 1;
int merchantSpearQuantity = 1;
int merchantShieldQuantity = 2;

int playerHammerQuantity = 1;
int playerSickelQuantity = 1;
int playerChiselQuantity = 2;


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
					std::cout << "Sorry you don't have enough coins for the bow.\n";
				}
				else {
					Bow();
				}
			}
			else if (Number == 2) {
				if (pCoin < spearPrice) {
					std::cout << "Sorry you don't have enough coins for the spear.\n";
				}
				else {
					Spear();
				}
			}
			else if (Number == 3) {
				if (pCoin < shieldPrice) {
					std::cout << "Sorry you don't have enough coins for the shield.\n";
				}
				else {
					Shield();
				}
			}
			else if (Number == 4) {
				buyisRunning = false;
			}
		} while (buyisRunning == true);
		return 0;
	}
	else if (YesOrNo == 'n') {
		std::cout << "Igor: Would you like to sell anything?\n";
	}
	//std::cin >> Number;
	//if (Number == 1)
	//	if (merchantBowQuantity == 0) {
	//		std::cout << "The Bow is sold out.\n";
	//	}
	//	else {
	//		BowQ();
	//	}









	/*__________________________________________________________________________________________________________________________________*/
	



	std::vector<std::string> inventory;

	inventory.push_back("1. hammer");
	inventory.push_back("2. sickle");
	inventory.push_back("3. chisel");


	

	/*std::cout << "Would you like to sell anything?\n";*/

	std::cin >> YesOrNo;
	if (YesOrNo == 'y') {
		std::cout << "\nYou have " << inventory.size() << " items.\n";

		std::cout << "\nYour items:\n";



		for (int i = 0; i < inventory.size(); ++i) {
			std::cout << inventory[i] << std::endl;
		}
		do {
			std::cin >> Number;
			if (Number == 1) {
				if (mCoin < hammerPrice) {
					std::cout << "Sorry I don't have enough coins for the hammer.\n";
				}
				else {
					Hammer();
				}
			}
			else if (Number == 2) {
				if (mCoin < sicklePrice) {
					std::cout << "Sorry I don't have enough coins for the sickle.\n";
				}
				else {
					Sickle();
				}
			}
			else if (Number == 3) {
				if (mCoin < chiselPrice) {
					std::cout << "Sorry I don't have enough coins for the sickle.\n";
				}
				else {
					Chisel();
				}
			}
			else if (Number == 4) {
				sellisRunning = false;
			}
		} while (sellisRunning == true);
		return 0;
	}
	else if (YesOrNo == 'n') {
		std::cout << "Alright have a wonderful day.\n";
	}
}




void Hammer() {
	std::cout << "You have sold the hammer.\n";
	mCoin -= hammerPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	pCoin += hammerPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
}

void Sickle() {
	std::cout << "You have sold the sickel.\n";
	mCoin -= sicklePrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	pCoin += sicklePrice;
	std::cout << "I have " << mCoin << " coins left.\n";
}

void Chisel() {
	std::cout << "You have sold the chisel.\n";
	mCoin -= chiselPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	pCoin += chiselPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
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
	mCoin += spearPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
}

void Shield() { //shield function (it makes the shield selectable/interact)
	/*std::string SHIELD;*/
	std::cout << "You have purchased the shield.\n";
	pCoin -= shieldPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin += shieldPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
}
void BowQ() {
	std::cout << "The Bow is sold out sorry.\n";
	merchantBowQuantity -= 1;
}