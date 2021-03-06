// Lab9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <map> 
#include<forward_list>
#include<iostream>
using namespace std;

int main()
{
	cout << "1 part:" << endl;
	map<long, long> cherepucha =
	{
		{ 0, 23 },
		{ 1, 47 },
		{ 2, 50 },
		{ 3, 98 },
		{ 4, 54 }

	};

	auto kony = cherepucha.begin();
	std::cout << "cherepucha contains:\n";
	for (auto it = cherepucha.begin(); it != cherepucha.end(); ++it)
	{
		cout << it->first << " : " << it->second << endl;
	}

	cout << "Delete with key 1" << endl;
	kony = cherepucha.find(1);
	cherepucha.erase(kony);

	cout << "Delete from key 3" << endl;
	kony = cherepucha.find(3);
	cherepucha.erase(kony, cherepucha.end());

	for (auto it = cherepucha.begin(); it != cherepucha.end(); ++it)
	{
		cout << it->first << " - " << it->second << endl;
	}

	cout << "2 part:" << endl;

	forward_list<pair<long, long>> nono;

	nono.push_front(pair<long, long>(5, 20));
	nono.push_front(pair<long, long>(6, 4));
	nono.push_front(pair<long, long>(7, 144));
	nono.push_front(pair<long, long>(8, 34));

	cherepucha.insert(nono.begin(), nono.end());

	std::cout << "cherepucha contains:\n";
	for (std::map<long, long>::iterator it = cherepucha.begin(); it != cherepucha.end(); ++it)
	{
		std::cout << it->first << " - " << it->second << '\n';
	}

	std::cout << "nono contains:\n";
	for (std::forward_list<pair<long, long>>::iterator it = nono.begin(); it != nono.end(); ++it)
	{
		std::cout << it->first << " - " << it->second << '\n';
	}

	return 0;
}