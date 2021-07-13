#include<iostream>
#include<iomanip>
#include<fstream>
#include<cctype>

using namespace std;

class Account {

    //Attributes
    int accNum; //This variable will hold the account number
    int accDeposit; //This variable will hold the amount of the deposit
    char accType; //This variable will hold the type of account
    char accName[60]; //This variable hold the name of the account holder

    //Methods
public:
    void newAccount(); //This function will create a new account
    void displayAccount() const; //This function will display account info
    void updateInfo(); //This function will add new data to account
    void depositAmount(int); //This function will take deposit amount and add to balance
    void withdrawalAmount(int); //This function will take withdrawal amount and subtract from balance
    void report() const; //This will display data in a table
    int returnNum() const; //This function will return the account number
    int returnDeposit() const; //This function will return the balance amount
    char returnType() const; //This function will return the type of account 

    

};

void Account::newAccount(){
    cout << "Enter the account number: ";
    cin >> accNum;

    cout << "\nEnter the name of the account holder: ";
    cin.ignore();
    cin.getline(accName, 60);

    cout << "\nEnter the type of account (C for checkings/S for savings): ";
    cin >> accType;
    accType = toupper(accType);

    cout << "\nEnter the initial amount: ";
    cin >> accDeposit;

    cout << "\nAccount Created!\n\n";


}

void Account::displayAccount() const{
    cout << "Account Number: " << accNum << endl;
    cout << "Account Holder: " << accName << endl;
    cout << "Type of Account: " << accType << endl;
    cout << "Available Balance: " << accDeposit << endl;

}

void Account::updateInfo(){
    cout << "Account Number: " << accNum << endl;

    cout << "Change Account Holder Name: ";
    cin.ignore();
    cin.getline(accName, 60);

    cout << "\nChange The Type of Account: ";
    cin >> accType;
    accType = toupper(accType);

    cout << "\nChange Balance Amount: ";
    cin >> accDeposit;

}

void Account::depositAmount(int dep){
    accDeposit += dep;

}

void Account::withdrawalAmount(int dep){
    accDeposit -= dep;

}

void Account::report(){

}

int Account::returnNum(){

}

int Account::returnDeposit(){

}

char Account::returnType(){

}

int main(){
    

    return 0;
}