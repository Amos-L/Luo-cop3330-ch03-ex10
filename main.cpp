/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Amos Luo
 */

#include "std_lib_facilities.h"

int main() {

	string operation;
	double num1;
	double num2;
	double result{};
	int x = 1;

	while (x = 1) {

		cout << "Enter operation: \n";
		cin >> operation;
		cout << "Enter first operand: \n";
		cin >> num1;
		cout << "Enter second operand: \n";
		cin >> num2;

			if (operation == "+" || operation == "add") {
				result = num1 + num2;
				cout << "Result is " << result << "\n";
			}
			if (operation == "-" || operation == "minus") {
				result = num1 - num2;
				cout << "Result is " << result << "\n";
			}
			if (operation == "*" || operation == "mul") {
				result = num1 * num2;
				cout << "Result is " << result << "\n";
			}
			if (operation == "/" || operation == "div") {

				result = num1 / num2;

				if (num1 == 0 || num2 == 0) {
					cout << "Cannot divide by zero";
					exit;
				}

				cout << "Result is " << result << "\n";
			}

		}
	}
