#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Registration Function
void registerUser() {
    string username, password;

    cout << "\n===== Registration =====" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    // Check if username already exists
    ifstream readFile(username + ".txt");

    if (readFile.good()) {
        cout << "Username already exists!" << endl;
        readFile.close();
        return;
    }

    readFile.close();

    // Store credentials in file
    ofstream file(username + ".txt");

    file << username << endl;
    file << password << endl;

    file.close();

    cout << "Registration Successful!" << endl;
}

// Login Function
void loginUser() {
    string username, password;
    string storedUsername, storedPassword;

    cout << "\n===== Login =====" << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    // Open user file
    ifstream file(username + ".txt");

    if (!file) {
        cout << "User not found!" << endl;
        return;
    }

    getline(file, storedUsername);
    getline(file, storedPassword);

    file.close();

    // Verify credentials
    if (username == storedUsername && password == storedPassword) {
        cout << "Login Successful!" << endl;
    } else {
        cout << "Incorrect Password!" << endl;
    }
}

// Main Function
int main() {

    int choice;

    do {
        cout << "\n===== Login & Registration System =====" << endl;

        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}