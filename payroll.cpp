#include "payroll.h"

Payroll::Payroll()
{
	
}

Payroll::Payroll(int hours, double rate)
{
	
}

Payroll::~Payroll()
{
	
}

//setters
void Payroll::setPayRate(double rate)
{
	payRate = rate;
}


void Payroll::setHours(int h)
{
	hours = h;
}


//getters
double Payroll::getPayRate()
{
	return payRate;
}

int Payroll::getHours()
{
	return hours;
}

double Payroll::calculatePay()
{
	return hours*payRate;
}
