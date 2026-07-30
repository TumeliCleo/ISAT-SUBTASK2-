#include <iostream>
using namespace std;

const int SIZE = 50;

int main() {
string orderIDs[SIZE];
string customerNames[SIZE];
int numMagwinyas[SIZE];
float totalAmounts[SIZE];

int count = 0;
int choice;

do {
cout << "\nOrder Management System\n";
cout << "1. Add a new order\n";
cout << "2. Display all orders\n";
cout << "3. Find an order by Order ID\n";
cout << "4. Calculate total revenue\n";
cout << "5. Exit\n";
cout << "Enter your choice (1-5): ";
cin >> choice;

if (choice == 1) {
if (count >= SIZE) {
cout << "Maximum orders reached!\n";
continue;
}

cout << "Enter Order ID: ";
cin >> orderIDs[count];

cout << "Enter Customer Name: ";
cin >> customerNames[count];

cout << "Enter Number of Magwinyas: ";
cin >> numMagwinyas[count];

cout << "Enter Total Cost: ";
cin >> totalAmounts[count];

count++;
cout << "Order added successfully!\n";
}

else if (choice == 2) {
if (count == 0) {
cout << "No orders to display.\n";
} else {
for (int i = 0; i < count; i++) {
cout << "Order ID: " << orderIDs[i]
<< ", Customer: " << customerNames[i]
<< ", Magwinyas: " << numMagwinyas[i]
<< ", Total: " << totalAmounts[i] << endl;
}
}
}

else if (choice == 3) {
string id;
cout << "Enter Order ID to find: ";
cin >> id;

bool found = false;
for (int i = 0; i < count; i++) {
if (orderIDs[i] == id) {
cout << "Order ID: " << orderIDs[i]
<< ", Customer: " << customerNames[i]
<< ", Magwinyas: " << numMagwinyas[i]
<< ", Total: " << totalAmounts[i] << endl;
found = true;
break;
}
}

if (!found)
cout << "Order not found.\n";
}

else if (choice == 4) {
float total = 0;
for (int i = 0; i < count; i++) {
total += totalAmounts[i];
}
cout << "Total Revenue: " << total << endl;
}

} while (choice != 5);

cout << "Exiting program...\n";
return 0;
}

