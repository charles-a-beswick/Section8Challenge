
#include <iostream>
#include <vector>
using namespace std;

//addCoinType :first output is  how many coins (.at(0))
//			  :second output is remainder (.at(1))
vector <int> addCoinType(int inputPence, int releventCoin) {

	vector <int> output;
	int howManyCoins;

	//Calculates how many coins of the type you need

	if (inputPence >= releventCoin) {
		howManyCoins = (inputPence / releventCoin);
	}
	else {
		howManyCoins = 0;
	}
	
	//Adds how many coins to the output vector
	output.push_back(howManyCoins);
	//left over money added to output vector
	output.push_back(inputPence % releventCoin);

	return output;
}