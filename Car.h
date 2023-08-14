#pragma once
#include <string>
#include <iostream>const
#include <time.h>

class Car
{
private:
	int P, Y;
	double S;
	std::string state_number;
	double* const Q = new double[5] {10.0, 20.0, 25.0, 60.0, 120.0};
public:
	//�����������
	Car();
	Car(int P, int Y, std::string state_number); // �.�, ��� �������, ���.�����

	//Getter and Setter
	int& const getP() { return P; };
	int& const getY() { return Y; };
	double& const getS() { return Tax(); };
	std::string const get_state_number() { return state_number; }
	double& getQ();

	//��������� �����
	double& Tax();

	//����� ������
	void print();

};

