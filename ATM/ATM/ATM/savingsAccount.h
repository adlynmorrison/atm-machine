#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <iostream>
#include <string>
using namespace std;

class SavingAccount:public account{
	private:
		double save;
	public:
		SavingAccount():account(){
			save=0.0;
		}
		SavingAccount(string FName,string LName,int accnum,double bal);
		void setwithdraw(double bal);
		void setdeposit(double deposit);
		void display();
};

void SavingAccount::setwithdraw(double bal){
	int wDraw;
	wDraw=bal-wDraw;
	cout<<"Your Saving Account Balance is "<<wDraw<<endl;
}

void SavingAccount::setdeposit(double deposit){
	deposit=balance+deposit;
}

void SavingAccount::display(){
}

#endif 