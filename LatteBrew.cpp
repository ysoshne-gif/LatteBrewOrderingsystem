#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Coffee {
    string name;
    double price;
    int stock;
};

int main() {

    // Menu items
    Coffee menu[5] = {
        {"Espresso", 90, 10},
        {"Cappuccino", 110, 8},
        {"Latte", 120, 12},
        {"Caramel Macchiato", 130, 6},
        {"Mocha", 125, 10}
    };

    double total = 0;
    int choice, qty;
    char again = 'Y';

    cout << "=============================\n";
    cout << "     LATTE BREW CAFE\n";
    cout << "=============================\n";

    while (again == 'Y' || again == 'y') {
        // Display menu
        cout << "\nMenu:\n";
        cout << "--------------------------------------\n";
        cout << left << setw(5) << "No"
             << setw(20) << "Coffee"
             << setw(10) << "Price"
             << "Stock\n";
        cout << "--------------------------------------\n";

        for (int i = 0; i < 5; i++) {
            cout << left << setw(5) << (i + 1)
                 << setw(20) << menu[i].name
                 << setw(10) << menu[i].price
                 << menu[i].stock << endl;
        }

        // User choice
        cout << "\nEnter item number: ";
        cin >> choice;

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> qty;

        if (qty <= 0) {
            cout << "Invalid quantity.\n";
            continue;
        }

        // Check stock
        if (qty > menu[choice - 1].stock) {
            cout << "Not enough stock available.\n";
            continue;
        }

        // Calculate order
        double subtotal = menu[choice - 1].price * qty;
        total += subtotal;
        menu[choice - 1].stock -= qty;

        cout << "\nYou ordered " << qty << " x " << menu[choice - 1].name
             << " = ₱" << subtotal << endl;

        cout << "Current total: ₱" << total << endl;

        // Ask if user wants to order again
        cout << "\nOrder another item? (Y/N): ";
        cin >> again;
    }

    cout << "\n=============================\n";
    cout << "        ORDER SUMMARY\n";
    cout << "=============================\n";
    cout << "Total Amount Due: ₱" << total << endl;
    cout << "Thank you for ordering at LATTE BREW! ☕\n";

    return 0;
}
