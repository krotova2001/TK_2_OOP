//класс отдельного абонента адресной книги
#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Abon //отдельный абонент
{
	string Name; //Название
	string Owner; // Владелец
	unsigned long int Telephone; // телефон
	string Addres; // Адрес
	string Type; // Род деятельности
	
	void Show() //показать абонета
	{
		cout << "\n---------------------\n";
		cout << "Название: " << Name <<"\n";
		cout << "Владелец: " << Owner << "\n";
		cout << "Телефон: " << Telephone << "\n";
		cout << "Адрес: " << Addres << "\n";
		cout << "Род деятельности " << Type << "\n";
	}

	Abon Add() // добавление 
	{
		Abon temp;
		
		cout << "\n Добавление нового абонента \n";
		cout << "Название: "; cin >> temp.Name;
		cout << "Владелец: ";  cin >> temp.Owner;
		cout << "Телефон: ";  cin >> temp.Telephone;
		cout << "Адрес: " ;  cin >> temp.Addres;
		cout << "Род деятельности ";  cin >> temp.Type;

		return temp;
	}
};

