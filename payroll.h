#ifndef PAY
#define PAY

class Payroll
{
	private:
		double payRate;
		int hours;
		double pay;
		
	public:
		Payroll();
		Payroll(int,double);
		~Payroll();
		
		//pay calculator
		double calculatePay();
		
		//setters
		void setPayRate(double);
		void setHours(int);
		
		//getters	
		double getPayRate();
		int getHours();
};
#endif
