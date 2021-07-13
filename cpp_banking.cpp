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

void Account::report() const{
    cout << accNum << setw(10) << " " << accName << setw(10) 
    << " " << accType << setw(6) << accDeposit << endl;

}

int Account::returnNum() const{
    return accNum;

}

int Account::returnDeposit() const{
    return accDeposit;

}

char Account::returnType() const {
    return accType;

}

// END OF THE ACCOUNT CLASS DEFINITIONS


//FUNCTION DECLARATIONS
void writeAccount(); // This function will write to the file
void displayInfo(int); //This function will display the account data
void changeAccount(int); //This function will change the data on the file
void deleteAccount(int); //This function will delete an account from the file
void displayAll(); //This function will display all account data
void depositOrWithdraw(); //This function will deposit or withdraw from an account
void openingPage(); //This is the first screen the user gets

int main(){
    

    return 0;
}

// This function will write to the file
void writeAccount(){
    Account account;
    ofstream outFile; //The file OutFile is created and opened

    outFile.open("account.data", ios::binary|ios::app);
    account.newAccount();
    outFile.write(reinterpret_cast<char *> (&account), sizeof(Account) );

    outFile.close(); //The file has been closed

}

//This function will display the account data
void displayInfo(int x){
    Account account;
    bool flag = false;
    ifstream inFile;
    inFile.open("account.data",ios::binary);

//Will display error message if the file is not opened
    if (!inFile){
        cout << "\nThe file could not be opened. Please press a 
        key to continue\n";

        return;
    }

    cout << "\nBalance Information\n";

    while(inFile.read(reinterpret_cast<char *> (&account), sizeof(Account) ) ){

        if (account.retacno() == x){
            account.displayAccount();
            flag = true;
        }
    }

    inFile.close();

    if (flag == false){
        cout << "\nThe account number does not exist\n"
    }


}

//This function will change the data on the file
void changeAccount(int x){
    bool found = false;
    Account account;

    fstream File;
	File.open("account.data",ios::binary|ios::in|ios::out);

//Will display error message if the file is not opened
	if(!File)
	{
		cout<<"\nThe file could not be opened. Please press a 
        key to continue\n";
		return;
	}


	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&account), sizeof(Account));
		if(account.retacno()==n)
		{
			account.displayAccount();
			cout<<"\n\nEnter The New Details of The Account: \n";
			account.updateInfo();
			int pos=(-1)*static_cast<int>(sizeof(Account));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&account), sizeof(Account));
			cout<<"\nAccount Updated\n";
			found=true;
		  }
	}

	File.close();

	if(found==false){
		cout<<"\nThe account does not exist\n";
        }
}


void deleteAccount(int){
    
}
void displayAll(){
    
}
void depositOrWithdraw(){
    
}
void openingPage(){
    
}