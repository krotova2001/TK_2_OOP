//����� ���������� �������� �������� �����
#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Abon //��������� �������
{
	string Name; //��������
	string Owner; // ��������
	unsigned long int Telephone; // �������
	string Addres; // �����
	string Type; // ��� ������������
	
	void Show() //�������� �������
	{
		cout << "\n---------------------\n";
		cout << "��������: " << Name <<"\n";
		cout << "��������: " << Owner << "\n";
		cout << "�������: " << Telephone << "\n";
		cout << "�����: " << Addres << "\n";
		cout << "��� ������������ " << Type << "\n";
	}

	Abon Add() // ���������� 
	{
		Abon temp;
		
		cout << "\n ���������� ������ �������� \n";
		cout << "��������: "; cin >> temp.Name;
		cout << "��������: ";  cin >> temp.Owner;
		cout << "�������: ";  cin >> temp.Telephone;
		cout << "�����: " ;  cin >> temp.Addres;
		cout << "��� ������������ ";  cin >> temp.Type;

		return temp;
	}
};

