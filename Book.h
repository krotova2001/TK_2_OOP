#pragma once
#include "Abon.h"

class Book
{
	Abon Baza[100]; // база данных
	int size = 0; // текущий размер с параметром по умолчанию
public:
	void Show()
	{
		for ( int i = 0; i < size; i++)
		{
			Baza[i].Show();
		}
	}

	void Add()
	{
		Baza[size] = Baza[size].Add();
		size++;
	}
	
};

