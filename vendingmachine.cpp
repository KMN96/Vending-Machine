/*
* Name : Khang Nguyen
* Email: knguyen101@myseneca.ca
* ID   : 122582208
* Date : September 15th, 2021
*
*I have done all the coding by myself and only copied the code that my professor
provided to complete my workshops and assignments.
*/

#include <iostream>
#include"drink.h"
#include"util.h"
using namespace std;
using namespace sdds;

  int main() {
        bool done = false;
        loadDrinks();
        cout << "Welcome to the Seneca Vending Machine" << endl << endl;
        while (!done) {
            drinkMenu();
            chooseDrink();
            cout << "\nDo you want to order another drink? (Y)es or (N)o: ";
            done = !confirm();
            cout << endl;
        }
        drinkMenu();
        cout << "\nThank you and come again" << endl;
        return 0;
    }
