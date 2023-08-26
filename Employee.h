#include <iostream>

//The class Employee is defined in a header file, it is used in the cpp program by implementing it via #include 

class Employee
{
	public:
		void SetAge(int Age) { itsAge = Age; }
		int GetAge() const {return itsAge; }
		void SetYearsOfService(int Years) { itsYearsOfService = Years; }
		int GetYearsofService() const {return itsYearsOfService; }
		void SetSalary(int Salary) { itsSalary = Salary; }
		int GetSalary() const {return itsSalary; }
		
	
		
	private:
		int itsAge;
		int itsYearsOfService;
		int itsSalary;
};
