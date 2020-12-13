#include <iostream>
#include "mathfunc.h"
using namespace std;

int main() {
    float op;
    float A;
    float B;
	int enter;
    cout << "Welcome to Tech Playz calculator app \n";
    cout << "Which operation do you want \n";
    cout << "1-Addition \n"<<"2-Subtraction \n"<<"3-Multiplication \n"<<"4-Division \n";
    cin >> op;
    cout << "Enter the first number: ";
    cin >> A;
    cout << "Enter the second number: ";
    cin >> B;
    if(op==1) {
        sum(A,B);
        cout << "The sum is "<<sum(A,B)<<endl;
    }
    else if(op==2) {
        diff(A,B);
        cout << "The difference is "<<diff(A,B)<<endl;
    }
    else if(op==3) {
         prod(A,B);
         cout << "The product is "<<prod(A,B)<<endl;
    }
    else if(op==4) {
		if(B==0) {
			cout << "CANNOT DIVIDE BY 0!"<<endl;
		}
         quot(A,B);
         cout << "The quotient is "<<quot(A,B) <<endl;
         cout << "The remainder is " << remainder(A,B) <<endl;
    }
    else {
         cout << "Invalid operation \a" <<op<<"\n";
    }
	cout << "PRESS ctrl+c to exit TO EXIT";
	cin >> enter;
	if(enter == 0) {
		return 0;
	}else {
		return 0;;
	}



}
