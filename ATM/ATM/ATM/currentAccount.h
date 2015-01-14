#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include <iostream>
#include <string>
using namespace std;

class CurrentAccount:public account{
	public:
		CurrentAccount();
		CurrentAccount(string FName,string LName,int accnum,double bal,double overd);
		void setOverdraftLimit(double overd);
		void setwithdraw(double balance);
		void setdeposit(double dep);
		void display();
};
#endif