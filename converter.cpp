#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void showMenu();
double convertCurrency(double amount, double rate);

int main() {
    int choiceFrom, choiceTo;
    double amount, convertedAmount;

    // Exchange rates (as of example, you can update them accordingly)
    const double USD_TO_EUR = 0.93;
    const double USD_TO_GBP = 0.78;
    const double USD_TO_PKR = 277.5;
    const double EUR_TO_USD = 1.07;
    const double EUR_TO_GBP = 0.84;
    const double EUR_TO_PKR = 300.2;
    const double GBP_TO_USD = 1.28;
    const double GBP_TO_EUR = 1.19;
    const double GBP_TO_PKR = 350.9;
    const double PKR_TO_USD = 0.0036;
    const double PKR_TO_EUR = 0.0033;
    const double PKR_TO_GBP = 0.0028;

    cout << "Welcome to Currency Converter!" << endl;

    showMenu();

    cout << "Enter the currency you want to convert from (1-4): ";
    cin >> choiceFrom;
    cout << "Enter the currency you want to convert to (1-4): ";
    cin >> choiceTo;
    cout << "Enter the amount you want to convert: ";
    cin >> amount;

    // Perform conversion based on user choice
    switch (choiceFrom) {
        case 1: // USD
            if (choiceTo == 2) convertedAmount = convertCurrency(amount, USD_TO_EUR);
            else if (choiceTo == 3) convertedAmount = convertCurrency(amount, USD_TO_GBP);
            else if (choiceTo == 4) convertedAmount = convertCurrency(amount, USD_TO_PKR);
            else convertedAmount = amount;
            break;
        case 2: // EUR
            if (choiceTo == 1) convertedAmount = convertCurrency(amount, EUR_TO_USD);
            else if (choiceTo == 3) convertedAmount = convertCurrency(amount, EUR_TO_GBP);
            else if (choiceTo == 4) convertedAmount = convertCurrency(amount, EUR_TO_PKR);
            else convertedAmount = amount;
            break;
        case 3: // GBP
            if (choiceTo == 1) convertedAmount = convertCurrency(amount, GBP_TO_USD);
            else if (choiceTo == 2) convertedAmount = convertCurrency(amount, GBP_TO_EUR);
            else if (choiceTo == 4) convertedAmount = convertCurrency(amount, GBP_TO_PKR);
            else convertedAmount = amount;
            break;
        case 4: // PKR
            if (choiceTo == 1) convertedAmount = convertCurrency(amount, PKR_TO_USD);
            else if (choiceTo == 2) convertedAmount = convertCurrency(amount, PKR_TO_EUR);
            else if (choiceTo == 3) convertedAmount = convertCurrency(amount, PKR_TO_GBP);
            else convertedAmount = amount;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << fixed << setprecision(2);
    cout << "Converted Amount: " << convertedAmount << endl;

    return 0;
}

// Function to display the menu
void showMenu() {
    cout << "Currencies available:" << endl;
    cout << "1. USD (US Dollar)" << endl;
    cout << "2. EUR (Euro)" << endl;
    cout << "3. GBP (British Pound)" << endl;
    cout << "4. PKR (Pakistani Rupee)" << endl;
}

// Function to convert currency
double convertCurrency(double amount, double rate) {
    return amount * rate;
}

