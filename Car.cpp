#include "Car.h"

Car::Car()
{
	state_number = ' ';
	P = NULL;
	Y = NULL;
}

Car::Car(int P, int Y, std::string state_number)
{
	this->P = P;
	this->Y = Y;
	this->state_number = state_number;
}

double& Car::getQ()
{
	if (P <= 100)
		return Q[0];
	else if (P > 100 && P <= 150)
		return Q[1];
	else if (P > 150 && P <= 200)
		return Q[2];
	else if (P > 200 && P <= 250)
		return Q[3];
	else if (P > 250)
		return Q[4];
}

double& Car::Tax()
{

	double temp = getQ();
	S = P * temp - (2023 - Y) / temp;
	return S;
}

void Car::print()
{
	std::cout << "Гос.Номер: " << state_number << std::endl;
	std::cout << "Лошадинные силы: " << P << std::endl;
	std::cout << "Год выпуска: " << Y << std::endl;
	std::cout << "Налоговая ставка: " << getQ() << std::endl;
	std::cout << "Налог: " << Tax() << std::endl << std::endl;

}
