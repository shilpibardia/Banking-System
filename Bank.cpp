#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Bank{
    public:
        int accountNumber;
        int balance;
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
    void createAccount(){
        cout<<"Enter Account Number: ";
        cin>>accountNumber;
        cout<<"Enter Account Holder Name:";
        getline(cin>>ws, accountHolderName);
        cout<<"Enter Account Type (1 for savings, 2 for current):";
        cin>>accountType;
        cout<<"Account Created"<<endl;
    }

};


int main(){

    while(true){
    display();
    int choice;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice){
    case 1:
        BankManagementSystem b1;
        b1.createAccount();
        break;
    // Case 2:
    //     deposit();
    //     break;
    // Case 3:
    //     withdraw();
    //     break;
    // Case 4:
    //     displayAccountDetails();
    //     break;
    // Case 5:
    //     checkBalance();
    //     break;
    // Case 6:
    //     TransactionHistory();
    //     break;
    // Case 7:
    //     exit(0);
    //     break;
    }
}

}