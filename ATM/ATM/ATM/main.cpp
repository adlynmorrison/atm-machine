#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "account.h"
#include "currentAccount.h"
#include "savingsAccount.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
	account acc;
	CurrentAccount curr;
	SavingAccount sacc;

	cout<<"Welcome to Morrison Banking System"<<endl;
	cout<<"Choose your account type below:"<<endl;
	cout<<"(1) Current Account"<<endl;
	cout<<"(2) Saving Account"<<endl;
	cout<<"(3) EXIT"<<endl;
	cin>>acc.chose;

	switch(acc.chose){
		case 1:
			cout<<"Please enter the details for customer no "<<i+1<<endl;
			cout<<"Please enter your first name: ";
			cin>>curr.firstname;
			cout<<"Please enter your last name: ";
			cin>>curr.lastname;
			cout<<"Please enter your account number: ";
			cin>>curr.accnum;
			cout<<"Please enter your current balance: ";
			cin>>acc.bal;
			break;
		case 2:
			cout<<"Please enter your first name: ";
			cin>>curr.firstname;
			cout<<"Please enter your last name: ";
			cin>>curr.lastname;
			cout<<"Please enter your account number: ";
			cin>>curr.accnum;
			cout<<"Please enter your current balance: ";
			cin>>acc.bal;
			break;
		case 3:
			cout<<"EXIT"<<endl;
			break;
	}
	return 0;
}
#endif