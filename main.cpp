#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int checks = 0, bills = 0;

    float totalCheckDeposits = 0;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "Bank Account\n";
    cout << "How many checks do you want to deposit?\n";
    cin >> checks;

    int i = 1;
    while (i <= checks) {
        float check_value = 0;
        cout << "How much do you want to deposit for check #" << i << "\n";
        cin >> check_value;
        totalCheckDeposits = totalCheckDeposits + check_value;
        i++;
    }

    int billCount;
    float totalsBills = 0;
    string moreCashDeposits = "YES";

    while (moreCashDeposits == "YES") {
        cout << "Do you want to deposit cash (YES/NO)? ";
        cin >> moreCashDeposits;

        if (moreCashDeposits == "NO") {
            break;
        }

        cout << "What type of bills do you want to deposit? (1/5/10/20/50/100) ";
        cin >> bills;

        cout << "How many bills of each type do you have? ";
        cin >> billCount;

        totalsBills = totalsBills + bills * billCount;
    }

    int coinCount;
    float totalsCoins = 0, coins = 0;
    string moreCoinDeposits = "YES";

    while (moreCoinDeposits == "YES") {
        cout << "Do you want to deposit coins (YES/NO)? ";
        cin >> moreCoinDeposits;

        if (moreCoinDeposits == "NO") {
            break;
        }

        cout << "What type of coins do you want to deposit? (0.1/0.5/0.10/0.25) ";
        cin >> coins;

        cout << "How many coins of each type do you have? ";
        cin >> coinCount;

        totalsCoins = totalsCoins + coins * coinCount;
    }

    cout << "Your bank total is $" << totalCheckDeposits + totalsBills + totalsCoins << "\n";

    return 0;
}
