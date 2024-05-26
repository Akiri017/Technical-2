#include <iostream>
#include <cctype>
#include <cstdlib>
#include "data.h" // Assuming this is where your stringOp class is defined
using namespace std;

int main() {
    stringOp obj;
    int choice;
    char option;

    do {
        do {
            cout << "\n[1] Find the string length" << endl;
            cout << "[2] Compare two strings" << endl;
            cout << "[3] Concatenate two strings" << endl;
            cout << "[4] Exit" << endl;

            cout << "\nEnter your choice: ";
            cin >> choice;

            if (choice < 1 || choice > 4) {
                cout << "Invalid input. Please try again.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
                system("PAUSE");
                system("CLS");
            }
        } while (choice < 1 || choice > 4);

        switch (choice) {
        case 1:
            obj.string_length();
            break;
        case 2:
            obj.string_compare();
            break;
        case 3:
            obj.string_concatenate();
            break;
        case 4:
            cout << "\nThank you for using the program!" << endl;
            exit(0);
            break;
        }

        do {
            cout << "\nTry Again? [Y/N]: ";
            cin >> option;

            if (toupper(option) == 'Y') {
                system("CLS");
                break;
            }
            else if (toupper(option) == 'N') break;

            else {
                cout << "Invalid choice. Please choose again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            }
        } while (true);

    } while (toupper(option) == 'Y');

    cout << "\nThank you for using the program!" << endl;
    return 0;
}
