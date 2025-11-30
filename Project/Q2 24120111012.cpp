#include <iostream>
using namespace std;

bool verifyPin(int userPIN){
        int inputtedPin;
        cout<<"Enter your pin: ";
        cin>>inputtedPin;

        if(inputtedPin == userPIN){
            return true;
        }
        else{
            int attempt;
            for(attempt=0; attempt<2; attempt++){
                cout<<"Incorrect PIN. Please try again: ";
                cin>>inputtedPin;
                if(inputtedPin == userPIN){
                    return true;
                }   
            }
            if(attempt == 2){
                cout<<"Account Locked. Please contact the bank."<<endl;
                return false;
        }
        }
        return false;
    }
    
void displayMenu(){
    cout<<"======== ATM MENU ========\n"
          "1. View Balance\n"
          "2. Deposit Cash\n"
          "3. Withdraw Cash\n"
          "4. Reset PIN\n"
          "5. Exit\n"
          "Enter your choice: ";

    
}

double viewBalance(double balance){
    cout<<"Your current balance is: "<<balance<<endl;
    return balance;
}

double depositMoney(double balance){
    double depositAmount;
    cout<<"Enter amount to deposit: ";
    cin>>depositAmount;
    balance += depositAmount;
    cout<<"Deposit successful. Your balance is: "<<balance<<endl;
    return balance;
}

double withdrawMoney(double balance, double dailyLimit){
    double withdrawAmount;
    cout<<"Enter the amount you want to withdraw: ";
    cin>>withdrawAmount;

    if(withdrawAmount > dailyLimit){
        cout<<"Withdrawal amount exceeds daily limit of "<<dailyLimit<<". Try again."<<endl;
    }
    else if(withdrawAmount > balance){
        cout<<"Insufficient funds. Your balance is: "<<balance<<endl;
    }
    else{
        balance -= withdrawAmount;
        cout<<"Withdrawal successful. Your balance is: "<<balance<<endl;
    }
    return balance;
}

int resetPin(int userPIN){
    int oldPin, newPin;
    cout<<"Enter your old PIN: ";
    cin>>oldPin;

    if(oldPin == userPIN){
        cout<<"Enter your new PIN: ";
        cin>>newPin;
        userPIN = newPin;
        cout<<"PIN successfully changed."<<endl;
    }
    else{
        cout<<"Incorrect old PIN. PIN change failed."<<endl;
    }
    return userPIN;
}

int main(){
    int accountBalance = 50000;
    int dailyWithdrawalLimit = 20000;
    int userPIN = 4321;
    int choice;

    bool isverifyPin = verifyPin(userPIN);

if(isverifyPin == 1){
    do{
       displayMenu();
       cin>>choice;

       switch(choice){
              case 1:accountBalance = viewBalance(accountBalance);
                        break;
              case 2:accountBalance = depositMoney(accountBalance);
                        break;
              case 3:accountBalance = withdrawMoney(accountBalance, dailyWithdrawalLimit);
                        break;                
              case 4:userPIN = resetPin(userPIN);
                        break;
              case 5:cout<<"Thank you for using our ATM."<<endl;
                        break; 
              default:cout<<"Invalid choice. Please try again."<<endl;

       }
    }
    while(choice != 5);
    return 0;
}
}