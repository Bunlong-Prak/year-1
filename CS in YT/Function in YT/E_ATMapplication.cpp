#include <iostream>
using namespace std;

void showMenu()
{
    cout << "************MENU************" << endl;
    cout << "1.Check Balance" << endl;
    cout << "2.Deposit" << endl;
    cout << "3.withdraw" << endl;
    cout << "4.Exit" << endl;
    cout << "****************************" << endl;
}

int main()
{
    int option;
    double balance = 500;

    // check balance, deposit, withdraw, show menu;
    do
    {
        showMenu();
        cout << "option:" << endl;
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            cout << "Balance is : " << balance << "$" << endl;
            break;
        case 2:
            cout << "Deposit amount : ";
            double deposit;
            cin >> deposit;
            balance += deposit;
            break;
        case 3:
            cout << "withdraw amount : ";
            double withdraw;
            cin >> withdraw;
            if (withdraw < balance)
                balance -= withdraw;
            else
                cout << "not enough money " << endl;
            break;
        }
    } while (option != 4);
    {
        cout << "Thank you for using Nate's ATM System " << endl;
    }
}