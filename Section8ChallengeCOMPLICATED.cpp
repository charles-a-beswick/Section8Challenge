// Section8ChangeChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "main.h"
using namespace std;

int main()
{
	int pence;
	cout << "Enter the change you need in pence (i.e. $2.49 becomes 249): ";
	cin >> pence;

	//UK coins - 200, 100, 50, 20, 10, 5, 2, 1 
	//use a vector to store final amout where each 
	//entry stores the amount of a particular type of coin
	vector <int> coins;

	//addCoinType :first output is how many coins (.at(0))
	//			  :second output is remainder (.at(1))
	

	//Vector of the type of coins in order to iterate in a for loop
	vector <int> typeOfCoins{ 200, 100, 50, 20, 10, 5, 2, 1 };

	//Iterating over types of coins vector to add all the amounts 
	//of each coin to the output coins vector

	for (int i = 0; i < typeOfCoins.size(); i++) {
		coins.push_back(addCoinType(pence, typeOfCoins.at(i)).at(0));
		pence = addCoinType(pence, typeOfCoins.at(i)).at(1);
	}

	//Clear output for user
	cout << "\nYou need this many of each coin: " << endl;
	
	for (int i = 0; i < typeOfCoins.size(); i++ ) {
		cout << "\n $" << static_cast<double>(typeOfCoins.at(i))/100 << " : " << coins.at(i);
	}
	cout << endl;
	
	return 0;
}


