#include <iostream>
#include "Employee.h"

int main()
{
	//All the methods set and get are imported from the header file, which is included above, under iostream
	
	Employee Zbyszek;
	Zbyszek.SetAge(32);
	Zbyszek.SetSalary(2000);
	Zbyszek.SetYearsOfService(7);
	std::cout << "Zbyszek ma " << Zbyszek.GetAge() << " lat, pensje w wysokosci " << Zbyszek.GetSalary() << " i pracuje juz " << Zbyszek.GetYearsofService() << " lat!" << std::endl;
	
	Employee Seba;
	Seba.SetAge(24);
	Seba.SetSalary(1200);
	Seba.SetYearsOfService(2);
	std::cout << "Seba ma " << Seba.GetAge() << " lat, pensje w wysokosci " << Seba.GetSalary() << " i pracuje juz " << Seba.GetYearsofService() << " lat!" << std::endl;
	
	std::cout << "Wpisz teraz liczby oznaczajace: wiek, pensje i lata pracy, zatwierdzajac kazda liczbe enterem!" << std::endl;
	int x, y, z;
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;
	
	Employee Janusz;
	Janusz.SetAge(x);
	Janusz.SetSalary(y);
	Janusz.SetYearsOfService(z);
	
	std::cout << "\n\nJanusz ma " << Janusz.GetAge() << " lat, pensje w wysokosci " << Janusz.GetSalary() << " i pracuje juz " << Janusz.GetYearsofService() << " lat! " << std::endl;
	
	char exit;
	std::cin >> exit;
	return 0;
}
