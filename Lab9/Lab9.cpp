// Lab9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <map> 
#include<forward_list >
#include<iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "1" << endl;
	map<long,long> cherepucha =
	{
		{ 10, 47 },
		{ 30, 50 },
		{ 55, 98 },
		{ 78, 54 }

	};
	//просмотр
	auto kony = cherepucha.begin();
	for (auto it = cherepucha.begin(); it != cherepucha.end(); ++it)
	{
		cout << it->first << " : " << it->second << endl;
	}
	cout << "Delete 10" << endl;
	kony = cherepucha.find(10);///итератор на заданный элемент в map
	cherepucha.erase(kony);///стираем его в map
	cout << "Delete s 55" << endl;
	kony = cherepucha.find(55);
	cherepucha.erase(kony, cherepucha.end());///стираем c элемента 'kony' и до конца map
	for (auto it = cherepucha.begin(); it != cherepucha.end(); ++it)
	{
		cout << it->first << " - " << it->second << endl;
	}
	cout << "2" << endl;
	forward_list  <long> nono =
	{
	{ 10},
	{ 3 },
	{ 55},
	{ 78 }
};
	std::forward_list<int> first = { 1, 2, 3, 4, 5, 6, 7};
	std::cout << "first contains:";
	for (int& x : first) std::cout << " " << x;
	std::cout << std::endl;


	std::map<long, long> foo, bar;

	foo[100] = 100;
	foo[200] = 200;

	bar[11] = 11;
	bar[12] = 22;
	bar[13] = 33;

	foo.swap(bar);

	std::cout << "foo contains:\n";
	for (std::map<long, long>::iterator it = foo.begin(); it != foo.end(); ++it)
		std::cout << it->first << "- " << it->second << '\n';

	std::cout << "bar contains:\n";
	for (std::map<long, long>::iterator it = bar.begin(); it != bar.end(); ++it)
		std::cout << it->first << " - " << it->second << '\n';
	
   //присвоение элементам map новых значений
	return 0;
}

