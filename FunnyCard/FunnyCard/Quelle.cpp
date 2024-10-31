#include <iostream>
#include <iomanip>

int main() {
    // Available denominations of coins and notes
    int denominations[] = { 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5 };
    int numDenominations = sizeof(denominations) / sizeof(denominations[0]);

    // Input the amount to be paid and the amount paid (in euros and cents)
    int eurosToPay, centsToPay, eurosPaid, centsPaid;
    std::cout << "Enter amount to be paid (in euros and cents, e.g., 6 50 for 6.50 Euro): ";
    std::cin >> eurosToPay >> centsToPay;
    std::cout << "Enter amount paid (in euros and cents, e.g., 10 0 for 10.00 Euro): ";
    std::cin >> eurosPaid >> centsPaid;

    // Convert euro and cent values to cents
    int amountToPay = eurosToPay * 100 + centsToPay;
    int amountPaid = eurosPaid * 100 + centsPaid;

    // Calculate the change amount
    int changeAmount = amountPaid - amountToPay;

    // Display the change amount
    std::cout << "Change amount: " << changeAmount / 100.0 << " Euro" << std::endl;

    // Calculate and display the number of each denomination in the change
    std::cout << "Change breakdown:\n";
    for (int i = 0; i < numDenominations; ++i) {
        int numNotes = changeAmount / denominations[i];
        if (numNotes > 0) {
            std::cout << std::setw(3) << numNotes << " x " << denominations[i] / 100.0 << " Euro" << std::endl;
            changeAmount %= denominations[i];
        }
    }

    return 0;
}
