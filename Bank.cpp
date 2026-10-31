#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <vector>

using namespace std;

class Bank{
    public:
        int accountNumber;
        double balance;
        string accountHolderName;
        int accountType; // 1 for savings, 2 for current
        int accountstatus; // 1 for active, 0 for inactive
};

void display(){
    cout << "======== Bank Management System =======" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Display Account Details" << endl;
    cout << "5. Check Balance" << endl;
    cout << "6. Transaction History" << endl;
    cout << "7. Exit" << endl;
}
class BankManagementSystem : public Bank{
    public:
    void createAccount(unordered_set<int>& accountNumbers) {
        double initial_amt;
    cout << "Enter Account Number: ";
    cin >> accountNumber;
    if (accountNumbers.find(accountNumber) != accountNumbers.end()) {
        cout << "Account already exists! Try another account number." << endl;
        return;
    }
    accountNumbers.insert(accountNumber);
    cout << "Enter Account Holder Name: ";
    getline(cin >> ws, accountHolderName);
    cout << "Enter Account Type (1 for savings, 2 for current): ";
    cin >> accountType;
    cout << "Account Created Successfully!" << endl;
    cout<<"Initial amount to deposite: ";
    cin>>initial_amt;
    balance+=initial_amt;
    }
    void deposit(){
        double deposit_money;
        cout<<"Enter amout to deposite: ";
        cin>>deposit_money;

        if(deposit_money<=0){
            cout << "Invalid deposit amount!" << endl;
            return;
        }
        
        balance+=deposit_money;
        cout<<"Succesfully Deposited!"<<endl;
        cout<<"Updated balance: "<<balance<<endl;
    }


    void withdraw(){
        double withdraw_money;
        cout<<"Enter amout to withdraw: ";
        cin>>withdraw_money;
        balance-=withdraw_money;
        cout<<"Succesfully Withdrawl!"<<endl;
    }
    void checkBalance(){
        cout<<"Total Balance: "<<balance<<endl;

    }
};


int main(){
    vector<BankManagementSystem> accounts;
    unordered_set<int> accountNumbers;
    BankManagementSystem b1;

    while(true){
    display();
    int choice;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice){
    case 1:
        b1.createAccount(accountNumbers);
        accounts.push_back(b1);
        break;
    case 2:{
        int acc_no;
        bool found=false;
        cout << "Enter Account Number: ";
        cin >> acc_no;    

        for (auto &account : accounts) {
            if (account.accountNumber == acc_no) {
                account.deposit();
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Account not found!" << endl;
        }
        break;
    }
    case 3:
        b1.withdraw();
        break;
    // case 4:
    //     displayAccountDetails();
    //     break;
    case 5:
        b1.checkBalance();
        break;
    // case 6:
    //     TransactionHistory();
    //     break;
    case 7:
        exit(0);
        break;
    }
}

}