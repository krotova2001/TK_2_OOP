//подобную телефонную книгу мы уэе делали, только без агрегированных классов

#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Book A;
	A.Add();
	A.Add();
	A.Show();
}
