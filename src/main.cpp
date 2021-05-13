/*
* Just a simple calculator
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

float sum(float a,float b) {
    float s;
    s=a+b;
    return (s);
}
float diff(float a,float b) {
    float d;
    d=a-b;
    return (d);
}
float prod(float a,float b) {
    float p;
    p=a*b;
    return (p);
}
float quot(float a,float b) {
    float q;
    q=a/b;
    return (q);
}
int remainder(int a,int b) {
    int r;
    r=a%b;
    return r;
}

int main() {
    float a;
    float b;
    int op;
    int ctrlc;
    
    cout << "Enter the first number: ";
    if(!(cin >> a)) {
    	cout << "Value must be a number!\n";
    	goto end;
    }
    cout << "Enter the second number: ";
    if(!(cin >> b)) {
    	cout << "Value must be a number!\n";
    	goto end;
    }
    cout << "Which operation do you want \n";
    cout << "1-Addition \n"<<"2-Subtraction \n"<<"3-Multiplication \n"<<"4-Division \n";
    if(!(cin >> op)) {
    	cout << "Invalid operation!\n";
    	goto end;
    }
    switch(op) {
        case 1:
            cout << "The sum is: " << sum(a, b) << endl;
            goto end;
        case 2:
            cout << "The difference is: " << diff(a, b) << endl;
            goto end;
        case 3:
            cout << "The product is: " << prod(a, b) << endl;;
            goto end;
        case 4:
            if(b==0) {
                cout << "Cannot divide by 0" << endl;
                goto end;
            }else {
                cout << "The quotient is: " << quot(a, b) << endl;
                cout << "\nThe remainder is: " << remainder(a, b) << endl;
                goto end;
            }
        default:
            cout << "Invalid operation\n";
            goto end;
    }
    end:
        system("pause");
    return 0;

}

