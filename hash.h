#include<cstdlib>
#include <iostream>
#include<string>
using namespace std;
	
	#ifndef HASH_H
#define HASH_H
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class hash{ private:
		static const int tableSize=4;
		struct item
		{string name;
		string drink;
		item* next;
		};
		item* HashTable[tableSize];
	
public:
	hash();
	int Hash(string key);
	void AddItem(string name,string drink);
	int NumberOfItemsInIndex(int index);
	void PrintTable();
	void PrintItemsInIndex(int index);
	void FindDrink(string name);
void RemoveItem(string name);
};
	
#endif
