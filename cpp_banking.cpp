#include<iostream>
#include<iomanip>
#include<fstream>
#include<cctype>

using namespace std;

class Account {

    //Attributes
    int accNum; //This variable will hold the account number
    int deposit; //This variable will hold the amount of the deposit
    char type; //This variable will hold the type of account
    char accName[60]; //This variable hold the name of the account holder

    //Methods
public:
    void newAccount(); //This function will create a new account
    void displayAccount(); //This function will display account info
    void updateInfo(); //This function will add new data to account
    void depositAmount(int); //This function will take deposit amount and add to balance
    void withdrawalAmount(int); //This function will take withdrawal amount and subtract from balance
    void report() const; //This will display data in a table
    int returnNum() const; //This function will return the account number
    int returnDeposit() const; //This function will return the balance amount
    char returnType() const; //This function will return the type of account 

    

};

void Account::newAccount(){

}

void Account::displayAccount(){

}

void Account::updateInfo(){

}

void Account::depositAmount(){

}

void Account::withdrawalAmount(){

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