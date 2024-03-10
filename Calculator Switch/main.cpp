#include <iostream>

using namespace std;

int main() {

// Declared Variables
int num1, num2;
char calculator;

// Declared Input
cout << "Enter First Number to Calculate: ";
cin >> num1;

cout << "" << endl;

cout << "Enter an Operator (+, -, *, /): ";
cin  >> calculator;

cout << "" << endl;

// End the program if the operator is invalid
if (calculator != '+' && calculator != '-' && calculator != '*' && calculator != '/') {
    cout << "Invalid Operators!";
    return 0;
}
 cout << "" << endl;

// Continue to second if the operator is valid
 cout << "Enter the Second Number to Calculate: ";
 cin >> num2;

 cout << "" << endl;

 // Declared Switch
switch(calculator) {
 case '+':
     cout << num1 << " + " << num2 << " = " << num1 + num2;
     break;

 case '-':
     cout << num1 << " - " << num2 << " = " << num1 - num2;
     break;

 case '*':
     cout << num1 << " * " << num2 << " = " << num1 * num2;
     break;

 case '/':
    if (num2 != 0) {
        cout << num1 << " / " << num2 << " = " << num1 / num2;
    } else {
    cout << "Cannot Divide by Zero!";
    break;
    }
  }

  cout << "" << endl;
return 0;
}
