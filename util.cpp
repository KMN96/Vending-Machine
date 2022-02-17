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
#include "util.h"

using namespace std;

namespace sdds {

	bool confirm() {
		char choice = cin.get();
		clearBuffer();
		return choice == 'Y';
	}

	void clearBuffer() {
		while (cin.get() != '\n');
	}

}