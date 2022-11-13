#include <iostream>
using namespace std;

#include "payroll.h"

int main()
{
	const int SIZE = 7;
	Payroll workers[SIZE];
	
	//variables
	int hoursWorked;
	double payR;
	
	for(int i = 1; i<=SIZE; i++)
	{
		cout << "Enter hours for worker " << i << " :";
		cin >> hoursWorked;
		workers[i].setHours(hoursWorked);
		
		cout << "Enter payrate for worker " << i << " $:";
		cin >> payR;
		workers[i].setPayRate(payR);
	}
	
	for (int i = 1; i<=SIZE; i++)
	{
		cout << "Total pay for worker " << i << " :$";
		cout << workers[i].calculatePay() << endl;
	}
	
	return 0;
}
