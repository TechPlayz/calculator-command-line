#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<float> digits;
	int digSize; //number of digits
	float num; //numbers to be iterated
	int op; //operation
	int endVar; //end statement variable
	cout << "1 Addition\n2 Subtraction\n3 Division\n4 Multiplication\n";
	cout << "Choose your operation: ";
	if(!(cin >> op)) {
		cout << "Invalid Operation! " << endl;
		goto end;
	}
	switch(op) {
		case 1:
			float sum;
			cout << "Enter the number of digits: ";
			if(!(cin >> digSize)) {
				cout << "Value must be a number!" << endl;
				goto end;
			}
			cout << "Now enter the numbers line by line: " << endl;
			for(int i = 0; i < digSize; i++) {
				if(!(cin >> num)) {
					cout << "Value must be a number!" << endl;
					goto end;
					break;
				}
				digits.push_back(num);
				sum += digits[i];
			}
			cout << "The Sum is: " << sum << endl;
			goto end;
		case 2:
			float diff;
			cout << "Enter the number of digits: ";
			if(!(cin >> digSize)) {
				cout << "Value must be a number!" << endl;
				goto end;
			}
			cout << "Now enter the numbers line by line: " << endl;
			for(int i = 0; i < digSize; i++) {
				if(!(cin >> num)) {
					cout << "Value must be a number!" << endl;
					goto end;
					break;
				}
				digits.push_back(num);
				diff -= digits[i];
			}
			cout << "The difference is: " << diff << endl;
			goto end;
		case 3:
			float a;
			float b;
			cout << "Enter the first number: ";
			if(!(cin >> a)) {
				cout << "Value Must be a number!" << endl;
				goto end;
			}
			cout << "Enter the second number: ";
			if(!(cin >> b)) {
				cout << "Value Must be a number!" << endl;
				goto end;
			}
			if(b == 0) {
				cout << "Error! Cannot divide by 0!" << endl;
				goto end;
			}
			else {
				cout << "The quotient is: " << a/b << endl;
				cout << "The remainder is: " << (int)a%(int)b << endl;
				goto end;
			}
		case 4:
			float prod;
			cout << "Enter the number of digits: ";
			if(!(cin >> digSize)) {
				cout << "Value must be a number!" << endl;
				goto end;
			}
			cout << "Now enter the numbers line by line: " << endl;
			for(int i = 0; i < digSize; i++) {
				if(!(cin >> num)) {
					cout << "Value must be a number!" << endl;
					goto end;
					break;
				}
				digits.push_back(num);
				prod *= digits[i];
			}
			cout << "The product is: " << prod << endl;
			goto end;
		default:
			cout << "Invalid Operation! " << endl;
			goto end;

	}
	
	end:
		cout << "Press Ctrl+C to exit" << endl;
		cin >> endVar;


}