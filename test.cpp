#include <iostream>
using namespace std;

int main()
{
double x;
double b;
int k;
cout << "Enter a number" << endl;
cin >> x;
cout << "Enter another number." << endl;
cin >> b;
double sum = x + b;
double difference = x - b;
double product = x * b;
double quotient = x / b;
cout << "What do you want to do with these numbers? Enter 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for dividing" << endl;
cin >> k;
switch (k) {

case 1:
cout << sum << endl;
break;
