#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function 1: Decimal to Binary
string decimalToBinary(int num) {
string binary = "";
if (num == 0) return "0";

while (num > 0) {
binary = to_string(num % 2) + binary;
num /= 2;
}
return binary;
}

// Function 2: Binary to Decimal
int binaryToDecimal(string binary) {
int decimal = 0;
int base = 1;

for (int i = binary.length() - 1; i >= 0; i--) {
if (binary[i] == '1') {
decimal += base;
}
base *= 2;
}
return decimal;
}

// Function 3: Decimal to Hexadecimal
string decimalToHex(int num) {
string hex = "";
char hexChars[] = "0123456789ABCDEF";

if (num == 0) return "0";

while (num > 0) {
hex = hexChars[num % 16] + hex;
num /= 16;
}
return hex;
}

// Function 4: Hexadecimal to Decimal
int hexToDecimal(string hex) {
int decimal = 0;

for (char c : hex) {
decimal *= 16;
if (isdigit(c))
decimal += c - '0';
else
decimal += toupper(c) - 'A' + 10;
}
return decimal;
}

int main() {
int choice;

do {
cout << "\nConversion Menu:\n";
cout << "1. Convert Decimal to Binary\n";
cout << "2. Convert Binary to Decimal\n";
cout << "3. Convert Hexadecimal to Decimal\n";
cout << "4. Convert Decimal to Hexadecimal\n";
cout << "5. Demo (Random Number to Binary)\n";
cout << "6. Exit\n";
cout << "Enter your choice (1-6): ";
cin >> choice;

if (choice == 1) {
int num;
cout << "Enter decimal number: ";
cin >> num;
cout << "Binary: " << decimalToBinary(num) << endl;
}
else if (choice == 2) {
string bin;
cout << "Enter binary number: ";
cin >> bin;
cout << "Decimal: " << binaryToDecimal(bin) << endl;
}
else if (choice == 3) {
string hex;
cout << "Enter hexadecimal number: ";
cin >> hex;
cout << "Decimal: " << hexToDecimal(hex) << endl;
}
else if (choice == 4) {
int num;
cout << "Enter decimal number: ";
cin >> num;
cout << "Hexadecimal: " << decimalToHex(num) << endl;
}
else if (choice == 5) {
srand(time(0));
int randNum = rand() % 100;
cout << "Random number: " << randNum << endl;
cout << "Binary: " << decimalToBinary(randNum) << endl;
}

} while (choice != 6);

cout << "Exiting program...\n";
return 0;
}                                   
