/*
 * main.cpp
 *
 *  Created on: May 1, 2021
 *      Author: Roberto Soto II
 */
#include <iostream>
using namespace std;

int main() {
	double dog_age, human_years; //Current age.
	int early_years, later_years;
	early_years = 21; //The first two years.


		cout << "Hello, please enter your dogs current age ";
		cin >> dog_age;
		later_years = (dog_age - 2) * 4;
		human_years = early_years + later_years; //Dog's age in human years

		cout << "Your dog is " << human_years << " years old in human years.\n";

}



