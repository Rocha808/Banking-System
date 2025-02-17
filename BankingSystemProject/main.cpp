#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    int option;
    double balance = 0, deposit = 0, withdraw = 0;
    bool exit = false;

    do {

        cout << "======== " << " BANK SYSTEM " << " ========" << endl;
        cout << "\n\t1. DEPOSIT MONEY \n\t2. WITHDRAW MONEY \n\t3. CHECK BALANCE \n\t4.  EXIT \n" << endl;
        cout << "================================" << endl;

        cout << "\nChoose an option: " << endl;
        cin  >> option;
        cout << endl;

        switch (option)
        {
        case 1:
            cout << "Enter an amount to deposit: $";
            cin >> deposit;
            cout << endl;

            if (deposit > 0) {
                balance = balance + deposit;
                cout << "Deposit Successful! New Balance: $" << balance << endl;
            } else {
                cout << "Invalid Amount! Deposit must be positive." << endl;
            }
            break;
        case 2:
            cout << "Enter an amount to withdraw: $";
            cin >> withdraw;
            cout << endl;

            assert(withdraw > 0);
            if (withdraw <= 0) {
                cout << "Invalid Amount! Withdraw must be positive." << endl;
            } else if (withdraw > balance) {
                cout << "Insufficient Funds! Withdrawal Failed." << endl;
            } else {
                balance = balance - withdraw;
                cout << "Withdrawal Successful! New Balance: $" << balance << endl;
            }
            break;
        case 3:
            cout << "Your current balance is: $" << balance << endl;
            break;
        case 4:
            cout << "Exiting the Banking System. Thank you for using our service!" << endl;
            exit = true;
            break;
        default:
            cout << "Invalid Option! Please choose a valid option." << endl;
        }
        
    } while (exit == false);
    
    assert(exit == false);

    return 0;

}