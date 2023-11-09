#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void setConsoleColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    while (true) {
        system("cls");
        setConsoleColor(11);  // Change text color to light cyan
        cout << "====================================" << endl;
        cout << "            ARCADE ZONE            " << endl;

        cout << "====================================" << endl;
        setConsoleColor(7);  // Reset text color

        cout << "1.  Car Game" << endl;
        // Add more options for other source files
        cout << "2.  BrickBreaker" << endl;
        cout << "3.  SpaceShooter" << endl;
         cout << "4.  TicTacToe" << endl;
         cout << "5.  FlappyBird" << endl;
        cout << "0. Exit" << endl << endl;

        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                system("g++ carGame.cpp -o carGame.exe");  // Compile Game New
                system("carGame.exe");  // Run Game New
                break;
            // Add more cases for other source files
            case 2:
                system("g++ BrickBreaker.cpp -o BrickBreaker.exe");  // Compile Game New
                system("BrickBreaker.exe");  // Run Game New
                break;
            case 3:
                system("g++ SpaceShooter.cpp -o SpaceShooter.exe");  // Compile Game New
                system("SpaceShooter.exe");  // Run Game New
                break;
            case 4:
                system("g++ TicTacToe.cpp -o TicTacToe.exe");  // Compile Game New
                system("TicTacToe.exe");  // Run Game New
                break;
            case 5:
                system("g++ FlappyBird.cpp -o FlappyBird.exe");  // Compile Game New
                system("FlappyBird.exe");  // Run Game New
                break;
            case 0:
                return 0;  // Exit the program
            default:
                cout << "Invalid choice. Please select again." << endl;
        }

        // Wait for user input before displaying the menu again
        system("pause");
    }

    return 0;
}
