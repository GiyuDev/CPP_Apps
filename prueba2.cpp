#include<iostream>

using namespace std;

/*
 * Unnecesary string return value, just for testing purposes! :D
 *
 * Returns the elavorated value depending on wich operator symbol the user is choosing
 *
 * */

string operation(float num_1, float num_2, char symbol) {
	float result = 0.0;
	string toReturn = "";

	switch (symbol) {
		case '+':
			result = (num_1 + num_2);
			toReturn = to_string(result);
			break;
		case '-':
			if (num_1 > num_2) {
				result = (num_1 - num_2);
			} else if (num_2 > num_1) {
				result = (num_2 - num_1);
			} else {
				result = (num_1 - num_2);
			}
			toReturn = to_string(result);
			break;
		case '*':
			result = (num_1 * num_2);
			toReturn = to_string(result);
			break;
		case '/':
			if (num_1 > num_2) {
				result = (num_1 / num_2);
			} else if (num_2 > num_1) {
				result = (num_2 / num_1);
			} else {
				result = (num_1 / num_2);
			}
			toReturn = to_string(result);
			break;


	}
	
	if (toReturn != "") {
		return toReturn;
	} else {
		return "0";
	}
}

int main() {
	float num_1, num_2;
	float results[4] = {};

	cout << "Please insert the first number: "<<endl; cin>>num_1;
	cout << "Please insert the second number: "<<endl; cin>>num_2;
	
	results[0] = stof(operation(num_1, num_2, '+'));
	results[1] = stof(operation(num_1, num_2, '-'));
	results[2] = stof(operation(num_1, num_2, '*'));
	results[3] = stof(operation(num_1, num_2, '/'));

	cout << endl;

	for (int i = 0; i < sizeof(results); i++) {
		switch (i) {
			case 0:
				cout << "Addition: \t"<<results[i]<<endl;
				break;
			case 1:
				cout << "Subctraction: \t"<<results[i]<<endl;
				break;
			case 2:
				cout << "Product: \t"<<results[i]<<endl;
				break;
			case 3:
				cout << "division: \t"<<results[i]<<endl;
				break;
			
		}
	}
	return 0;
}
