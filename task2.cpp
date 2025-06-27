#include <iostream>
using namespace std;
int main(){

	double baseSalary , houseRentAllownce , medicleAllownce , totalSalary ;
	
	cout << "Enter the Salary.." ;
	cin >> baseSalary ;
	
	houseRentAllownce = baseSalary * 0.2 ;
	medicleAllownce = baseSalary * 0.1 ;
	
	totalSalary = baseSalary ;
	totalSalary += houseRentAllownce ;
	totalSalary += medicleAllownce ;
	
	cout << "Base Salary.. " << baseSalary << endl ;
	cout << "HR Allownce.. " << houseRentAllownce << endl ;
	cout << "Medicle Allownce .. " << medicleAllownce << endl ;
	cout << "Total Salary  " << totalSalary << endl ;
	
	
	
return 0;
}

