#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double initial;
    double x;
    
    double payment;
    
    
	cout << "Enter initial loan: ";
	cin >> initial;
	cout << "Enter interest rate per year (%): ";
	cin >> x;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;


	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

    int year=1;
	
	while(1){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << initial;
	double interest=x*initial/100;
	cout << setw(13) << left << interest;
	double total=initial+interest;
	cout << setw(13) << left << total;
	if(payment>total){
	    payment=total;
	    }
	cout << setw(13) << left << payment;
	initial = total-payment;
	cout << setw(13) << left << initial;
	cout << "\n";	
	
	year++;
	if(initial==0)break;
	}
	
	
	
	return 0;
}