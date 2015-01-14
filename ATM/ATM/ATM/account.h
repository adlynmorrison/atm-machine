#include <iostream>
#include <string>
using namespace std;

class account{
public:
	string firstname;
	string lastname;
	int accnum;
	double balance;
	int chose;
	double bal;

public:
	account();
	account(string FName,string LName,int accnum,double bal);
	void setAccountNumber(int accnum);
	void setBalance(double bal);
	void setWithdraw(int wdraw,double bal);
	void setDeposit(int dep,double bal);
	double getBalance();
	string getFullName(string fName,string lName);
	void display(string FName,string LName);
};

account::account(){
	firstname="Ray'Von";
	lastname="Pope";
	accnum=5961;
	balance=0.0;
}

account::account(string FName,string LName,int accnum,double bal){
	firstname = FName;
	lastname = LName;
	accnum = accnum;
	bal = bal;
}

void account::setAccountNumber(int accnum){
	accnum = accnum;
}

void account::setBalance(double bal){
	balance = bal;
}

void account::setWithdraw(int wdraw,double bal){
	if(bal>=wdraw){
		wdraw=bal-wdraw;
		cout<<"Your current balance is: "<<wdraw<<endl;
	}else{
		cout<<"No money"<<endl;
	}
}

void account::setDeposit(int dep,double bal){
	dep=dep+bal;
	cout<<"Your current balance is: "<<dep<<endl;
}

double account::getBalance(){
	return balance;
}

string account::getFullName(string FName,string LName){
	string FullName,x=" ";
	LName=x+LName;
	return FullName=FName+LName;
}

void account::display(string FName,string LName){
	cout<<"First Name: "<<FName<<endl;
	cout<<"Last Name: "<<LName<<endl;
	cout<<"Full Name: "<<getFullName(FName,LName)<<endl;
	cout<<"Account Number: "<<accnum<<endl;
	cout<<"Current Balance: "<<balance<<endl;
}