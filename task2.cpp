#include <iostream>
#include <string>
using namespace std;

int main() {
    int balance, amount, type;
    int totalWithdrawn = 0;
    int approvedCount = 0;
    int rejectedCount = 0;
    string result[3];

    cout << "Initial Balance: ";
    cin >> balance;

    for (int i = 0; i < 3; i++) {
        cout << "\nTransaction " << i + 1 << ":\n";
        cout << "Amount: ";
        cin >> amount;
        cout << "ATM Type: ";
        cin >> type;

        int fee = (type == 1) ? 100 : 0;

        if (amount <= 0 || amount % 500 != 0) {
            result[i] = "INVALID AMOUNT";
            rejectedCount++;
        } else if (totalWithdrawn + amount > 20000) {
            result[i] = "DAILY LIMIT EXCEEDED";
            rejectedCount++;
        } else if (balance - amount - fee < 1000) {
            result[i] = "INSUFFICIENT FUNDS";
            rejectedCount++;
        } else {
            result[i] = "APPROVED";
            balance -= (amount + fee);
            totalWithdrawn += amount;
            approvedCount++;
        }
    }

    cout << "\nTransaction 1: " << result[0] << endl;
    cout << "Transaction 2: " << result[1] << endl;
    cout << "Transaction 3: " << result[2] << endl;
    cout << "Final Balance: " << balance << endl;
    cout << "Total Withdrawn: " << totalWithdrawn << endl;
    cout << "Approved Transactions: " << approvedCount << endl;
    cout << "Rejected Transactions: " << rejectedCount << endl;

    return 0;
}