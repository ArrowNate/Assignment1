// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

void Bow();
void Spear();
void Shield();

void Hammer();
void Sickle();
void Chisel();

char YesOrNo;
char BuyOrSellOrNo;

int Number;

std::vector<std::string> inventory;
std::vector<std::string> playerInventory;

bool buyisRunning = true;
bool sellisRunning = true;
bool gameisRunning = true;

int mCoin = 50;
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
int playerSickleQuantity = 1;
int playerChiselQuantity = 2;


int main()

{
	inventory.push_back("1. bow [1] - 15 coins");
	inventory.push_back("2. spear [1]- 15 coins");
	inventory.push_back("3. shield [2]- 10 coins");

	playerInventory.push_back("1. hammer [1] - 5 coins");
	playerInventory.push_back("2. sickle [1] - 5 coins");
	playerInventory.push_back("3. chisel [2] - 5 coins");

	do {

		std::cout << "Igor: Hello stranger my name is Igor The Merchant.\nWould you like to buy or sell anything? \n";
		std::cout << "[b] = Buy [s] = Sell [y] = Exit\n";

		std::cin >> BuyOrSellOrNo;
		if (BuyOrSellOrNo == 'b') {

			std::cout << "\nI have " << inventory.size() << " items.\n";

			std::cout << "\nMy items:\n";

			for (int i = 0; i < inventory.size(); ++i) {
				std::cout << inventory[i] << std::endl;
			}
			std::cout << "4. Leave Igor's List\n";

			do {

				std::cin >> Number;
				if (Number == 1) {
					if (pCoin < bowPrice) {
						std::cout << "Sorry you don't have enough coins for the bow.\n";
					}
					if (merchantBowQuantity < 1) {
						std::cout << "The bow is sold out.\n";
					}
					else {
						Bow();
					}
				}
				else if (Number == 2) {
					if (pCoin < spearPrice) {
						std::cout << "Sorry you don't have enough coins for the spear.\n";
					}
					if (merchantSpearQuantity < 1) {
						std::cout << "The spear is sold out.\n";
					}
					else {
						Spear();
					}
				}
				else if (Number == 3) {
					if (pCoin < shieldPrice) {
						std::cout << "Sorry you don't have enough coins for the shield.\n";
					}
					if (merchantShieldQuantity < 1) {
						std::cout << "The shield is sold out.\n";
					}
					else {
						Shield();
					}
				}
				else if (Number == 4) {
					buyisRunning = false;
				}
			} while (buyisRunning == true);

		}
		if (BuyOrSellOrNo == 's') {
			std::cout << "\nYou have " << playerInventory.size() << " items.\n";

			std::cout << "\nYour items:\n";

			for (int i = 0; i < playerInventory.size(); ++i) {
				std::cout << playerInventory[i] << std::endl;
			}
			std::cout << "4. Leave Your List\n";
			do {
				std::cin >> Number;
				if (Number == 1) {
					if (mCoin < hammerPrice) {
						std::cout << "Sorry I don't have enough coins for the hammer.\n";
					}
					if (playerHammerQuantity < 1) {
						std::cout << "You don't have anymore hammers.\n";
					}
					else {
						Hammer();
					}
				}
				else if (Number == 2) {
					if (mCoin < sicklePrice) {
						std::cout << "Sorry I don't have enough coins for the sickle.\n";
					}
					if (playerSickleQuantity < 1) {
						std::cout << "You don't have anymore sickles.\n";
					}
					else {
						Sickle();
					}
				}
				else if (Number == 3) {
					if (mCoin < chiselPrice) {
						std::cout << "Sorry I don't have enough coins for the sickle.\n";
					}
					if (playerChiselQuantity < 1) {
						std::cout << "You don't have anymore chisels.\n";
					}
					else {
						Chisel();
					}
				}
				else if (Number == 4) {
					sellisRunning = false;
				}
			} while (sellisRunning == true);
		}
		std::cout << "Would you like to end the game?\n Yes [y] No [n]\n";
		std::cin >> YesOrNo;
		if (YesOrNo == 'y') {
			gameisRunning = false;
		}
		if (YesOrNo == 'n') {
			(gameisRunning == true);
		}

	} while (gameisRunning == true);


	return 0;
}


void Hammer() {
	std::cout << "You have sold the hammer.\n";
	pCoin += hammerPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin -= hammerPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
	playerHammerQuantity -= 1;
	std::cout << "You have " << playerHammerQuantity << " hammers left.\n";
}

void Sickle() {
	std::cout << "You have sold the sickel.\n";
	pCoin += sicklePrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin -= sicklePrice;
	std::cout << "I have " << mCoin << " coins left.\n";
	playerSickleQuantity -= 1;
	std::cout << "You have " << playerSickleQuantity << " sickles left.\n";
}

void Chisel() {
	std::cout << "You have sold the chisel.\n";
	pCoin += chiselPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin -= chiselPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
	playerChiselQuantity -= 1;
	std::cout << "You have " << playerChiselQuantity << " chisels left.\n";
}

void Bow() { //bow function (it makes the bow selectable/interact)
	/*std::string BOW;*/
	std::cout << "You have purchased the bow.\n";
	pCoin -= bowPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin += bowPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
	merchantBowQuantity -= 1;
	std::cout << "I have " << merchantBowQuantity << " bows left.\n";
}

void Spear() { //spear function (it makes the spear selectable/interact)
	/*std::string SPEAR;*/
	std::cout << "You have purchased the spear.\n";
	pCoin -= spearPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin += spearPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
	merchantSpearQuantity -= 1;
	std::cout << "I have " << merchantSpearQuantity << " spears left.\n";
}

void Shield() { //shield function (it makes the shield selectable/interact)
	/*std::string SHIELD;*/
	std::cout << "You have purchased the shield.\n";
	pCoin -= shieldPrice;
	std::cout << "You have " << pCoin << " coins left.\n";
	mCoin += shieldPrice;
	std::cout << "I have " << mCoin << " coins left.\n";
	merchantShieldQuantity -= 1;
	std::cout << "I have " << merchantShieldQuantity << " shield left.\n";
}