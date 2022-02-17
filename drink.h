/*
* Name : Khang Nguyen
* Email: knguyen101@myseneca.ca
* ID   : 122582208
* Date : September 15th, 2021
*
*I have done all the coding by myself and only copied the code that my professor
provided to complete my workshops and assignments.
*/

#ifndef SSDS_DRINK_H
#define SSDS_DRINK_H

namespace sdds {

	struct Drink {
		char name[10];
		int volume;
		double price;
		int quantity;
	};

	const int MAXDRINKS = 5;

	extern Drink machine[MAXDRINKS];

	void loadDrinks();
	void drinkMenu();
	void displayDrink(const Drink* drink);
	int chooseDrink();
	bool updateDrink(int sel);
}

#endif
